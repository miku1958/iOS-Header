//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class IKAppContext, IKDOMNode, IKJSObject, IKViewElement, NSString;
@protocol IKDOMFeature;

@protocol IKDOMFeature <NSObject>

@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly, copy, nonatomic) NSString *featureName;

+ (IKJSObject *)makeFeatureJSObjectForFeature:(id<IKDOMFeature>)arg1;
- (id)initWithDOMNode:(IKDOMNode *)arg1 featureName:(NSString *)arg2;

@optional
- (void)migrateToViewElement:(IKViewElement *)arg1;
@end

