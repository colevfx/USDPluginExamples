//
// Copyright © 2020 Weta Digital Limited
//
// SPDX-License-Identifier: Apache-2.0
//
#pragma once

#include "./api.h"

#include <pxr/usd/ar/resolver.h>

PXR_NAMESPACE_OPEN_SCOPE

class TriResolver : public ArResolver
{
public:
    ARTRI_API
    bool IsRelativePath(const std::string& path) override;

    ARTRI_API
    virtual std::string AnchorRelativePath(const std::string& anchorPath,
                                           const std::string& path) override;

    ARTRI_API
    virtual bool CreatePathForLayer(const std::string& path) override;

protected:
    ARTRI_API
    virtual std::string _CreateIdentifier(
        const std::string& assetPath,
        const ArResolvedPath& anchorAssetPath) override;

    ARTRI_API
    virtual std::string _CreateIdentifierForNewAsset(
        const std::string& assetPath,
        const ArResolvedPath& anchorAssetPath) override;

    ARTRI_API
    virtual ArResolvedPath _Resolve(const std::string& assetPath) override;

    ARTRI_API
    virtual ArResolvedPath _ResolveForNewAsset(
        const std::string& assetPath) override;

    ARTRI_API
    virtual std::shared_ptr<ArAsset> _OpenAsset(
        const ArResolvedPath& resolvedPath) override;

    ARTRI_API
    virtual std::shared_ptr<ArWritableAsset> _OpenAssetForWrite(
        const ArResolvedPath& resolvedPath,
        WriteMode writeMode) override;

    ARTRI_API
    virtual VtValue _GetModificationTimestamp(
        const std::string& assetPath,
        const ArResolvedPath& resolvedPath) override;

    ARTRI_API
    virtual std::string _GetExtension(const std::string& path) override;

    ARTRI_API
    virtual void _BeginCacheScope(VtValue* cacheScopeData) override;

    ARTRI_API
    virtual void _EndCacheScope(VtValue* cacheScopeData) override;
};

PXR_NAMESPACE_CLOSE_SCOPE
