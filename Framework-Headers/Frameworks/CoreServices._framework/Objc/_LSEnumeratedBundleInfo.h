//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSEnumeratedBundleInfo : NSObject
{
    BOOL _isPlaceholder;
    NSString *_bundleID;
}

@property (readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 isPlaceholder:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;

@end

