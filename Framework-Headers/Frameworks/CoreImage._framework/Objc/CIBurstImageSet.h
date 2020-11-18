//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject
{
    CIBurstImageSetInternal *_priv;
}

+ (id)burstImageSet;
+ (id)burstImageSetWithOptions:(id)arg1;
+ (id)defaultVersionString;
- (void)addImageFromIOSurface:(struct __IOSurface *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)allImageIdentifiers;
- (id)bestImageIdentifiers;
- (id)burstId;
- (id)coverImageIdentifier;
- (void)dealloc;
- (unsigned long long)imageClusterCount;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)imageClusterForIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (BOOL)isAction;
- (BOOL)isPortrait;
- (double)secondsSinceStart;
- (void)setLoggingListener:(void *)arg1 withUserInfo:(void *)arg2;
- (id)statsForImageWithIdentifier:(id)arg1;

@end
