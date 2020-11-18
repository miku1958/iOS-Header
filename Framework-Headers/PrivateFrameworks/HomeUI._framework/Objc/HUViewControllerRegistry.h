//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HUViewControllerRegistry : NSObject
{
    NSMutableDictionary *_viewControllerClassesByIdentifier;
}

@property (readonly, nonatomic) NSMutableDictionary *viewControllerClassesByIdentifier; // @synthesize viewControllerClassesByIdentifier=_viewControllerClassesByIdentifier;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)registerViewControllerClass:(Class)arg1 forIdentifier:(id)arg2;
- (Class)viewControllerClassForIdentifier:(id)arg1;

@end
