//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKInternalIconManager : NSObject
{
    shared_ptr_6d521cf7 _iconManager;
    shared_ptr_dd2d1f5e _stylesheetVendor;
    struct read_write_lock _nameToStyleManagerLock;
    struct map<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, geo::StdAllocator<std::__1::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> _nameToStyleManager;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _resourceManager;
    struct shared_ptr<md::GeoResourceProvider> _resourceProvider;
    shared_ptr_76a6df1b _fontManager;
}

+ (unsigned int)convertCalloutShape:(unsigned char)arg1;
+ (long long)convertGrlSizeGroup:(unsigned char)arg1;
+ (unsigned char)convertSizeGroup:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)darkVariant;
- (void)dealloc;
- (id)imageForDataID:(unsigned int)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForIconID:(unsigned int)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForImageSourceKey:(id)arg1;
- (id)imageForKey:(unsigned int)arg1 value:(unsigned int)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForStyleAttributes:(id)arg1 styleManager:(shared_ptr_a3c46825)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)init;
- (id)init:(shared_ptr_6d521cf7)arg1 stylesheetVendor:(shared_ptr_dd2d1f5e)arg2;
- (BOOL)isCachingAtlases;
- (void)purge;
- (void)setIsCachingAtlases:(BOOL)arg1;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)trafficIncidentTypeKey;

@end

