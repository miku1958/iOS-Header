//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject
{
    LSBundleProxy *_bundleProxy;
}

@property (strong, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;

+ (id)activityBundleHelperForExtension:(id)arg1;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2;
- (id)init;
- (id)initWithBundleProxy:(id)arg1;

@end

