//
// Copyright © 2020 Weta Digital Limited
//
// SPDX-License-Identifier: Apache-2.0
//
#include "resolver.h"

#include <pxr/usd/ar/defineResolver.h>
#include <pxr/base/vt/value.h>

PXR_NAMESPACE_OPEN_SCOPE

AR_DEFINE_RESOLVER(TriResolver, ArResolver);

bool
TriResolver::IsRelativePath(const std::string& path)
{
    // tri protocol does not support relative pathing.
    return false;
}

std::string
TriResolver::AnchorRelativePath(const std::string& anchorPath,
                                const std::string& path)
{
    // tri protocol does not support relative pathing.
    return path;
}

bool
TriResolver::CreatePathForLayer(const std::string& path)
{
    return false;
}

std::string
TriResolver::_CreateIdentifier(const std::string& assetPath,
                               const ArResolvedPath& anchorAssetPath)
{
    return std::string();
}

std::string
TriResolver::_CreateIdentifierForNewAsset(const std::string& assetPath,
                                          const ArResolvedPath& anchorAssetPath)
{
    return std::string();
}

ArResolvedPath
TriResolver::_Resolve(const std::string& assetPath)
{
    return ArResolvedPath();
}

ArResolvedPath
TriResolver::_ResolveForNewAsset(const std::string& assetPath)
{
    return ArResolvedPath();
}

std::shared_ptr<ArAsset>
TriResolver::_OpenAsset(const ArResolvedPath& resolvedPath)
{
    return std::shared_ptr<ArAsset>();
}

std::shared_ptr<ArWritableAsset>
TriResolver::_OpenAssetForWrite(const ArResolvedPath& resolvedPath,
                                WriteMode writeMode)
{
    return std::shared_ptr<ArWritableAsset>();
}

VtValue
TriResolver::_GetModificationTimestamp(const std::string& assetPath,
                                       const ArResolvedPath& resolvedPath)
{
    return VtValue();
}

std::string
TriResolver::_GetExtension(const std::string& path)
{
    return std::string();
}

void
TriResolver::_BeginCacheScope(VtValue* cacheScopeData)
{}

void
TriResolver::_EndCacheScope(VtValue* cacheScopeData)
{}

PXR_NAMESPACE_CLOSE_SCOPE
