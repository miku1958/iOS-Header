//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADActionViewControllerManager : NSObject
{
    NSMutableDictionary *_servingAdSpaces;
}

@property (strong, nonatomic) NSMutableDictionary *servingAdSpaces; // @synthesize servingAdSpaces=_servingAdSpaces;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)actionViewController:(id)arg1 dismissForIdentifier:(id)arg2;
- (void)cancelRequestForActionViewControllerForAdSpace:(id)arg1;
- (id)init;
- (void)requestActionViewControllerForAdSpace:(id)arg1;

@end

