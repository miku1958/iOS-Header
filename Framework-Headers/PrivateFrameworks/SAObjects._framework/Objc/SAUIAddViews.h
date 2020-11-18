//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAUIAddViews : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSString *dialogPhase;
@property (copy, nonatomic) NSString *displayTarget;
@property (nonatomic) BOOL scrollToTop;
@property (nonatomic) BOOL temporary;
@property (copy, nonatomic) NSArray *views;

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
