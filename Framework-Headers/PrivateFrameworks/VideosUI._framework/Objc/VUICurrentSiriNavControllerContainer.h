//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface VUICurrentSiriNavControllerContainer : NSObject
{
    NSPointerArray *_activeNavigationControllers;
}

@property (strong, nonatomic) NSPointerArray *activeNavigationControllers; // @synthesize activeNavigationControllers=_activeNavigationControllers;

+ (BOOL)isRunningInSiriPluggin;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)currentSiriNavController;
- (id)init;
- (void)setCurrentSiriNavController:(id)arg1;

@end
