//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSTabDialogCancellationExemption : NSObject
{
    CDUnknownBlockType _cancellationExemptionHandler;
}

+ (id)committedNavigationExemption;
+ (id)provisionalNavigationExemption;
+ (id)sameOriginNavigationExemption:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCancellationHandler:(CDUnknownBlockType)arg1;
- (BOOL)isExemptFromCancellationInContext:(id)arg1;

@end
