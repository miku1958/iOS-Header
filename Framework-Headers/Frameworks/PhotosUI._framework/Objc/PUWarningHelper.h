//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUWarningHelper : NSObject
{
    NSArray *__assets;
}

@property (strong, nonatomic, setter=_setAssets:) NSArray *_assets; // @synthesize _assets=__assets;

+ (id)_suffix:(id)arg1;
+ (void)getCombinedRemovalDeletionWarningMessage:(id *)arg1 removeButtonTitle:(id *)arg2 deleteButtonTitle:(id *)arg3 cancelTitle:(id *)arg4 forAssets:(id)arg5 inCollection:(id)arg6;
+ (void)getRemovalWarningMessage:(id *)arg1 buttonTitle:(id *)arg2 cancelTitle:(id *)arg3 forAssets:(id)arg4 inCollection:(id)arg5;
- (void).cxx_destruct;

@end

