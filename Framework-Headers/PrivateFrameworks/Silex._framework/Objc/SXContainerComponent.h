//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponent.h>

@class SXJSONArray;
@protocol SXContentDisplay;

@interface SXContainerComponent : SXComponent
{
}

@property (readonly, nonatomic) SXJSONArray *allComponents; // @dynamic allComponents;
@property (readonly, nonatomic) SXJSONArray *components; // @dynamic components;
@property (readonly, nonatomic) id<SXContentDisplay> contentDisplay; // @dynamic contentDisplay;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (CDUnknownBlockType)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;
+ (id)typeString;

@end

