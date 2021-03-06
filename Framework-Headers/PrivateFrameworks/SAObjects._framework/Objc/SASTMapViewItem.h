//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSDate, NSNumber, NSString, SALocation;
@protocol SASTTemplateAction;

@interface SASTMapViewItem : AceObject <SASTActionableTemplateItem>
{
}

@property (strong, nonatomic) id<SASTTemplateAction> action; // @dynamic action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SALocation *location;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *zoomLevel;

+ (id)mapViewItem;
+ (id)mapViewItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

