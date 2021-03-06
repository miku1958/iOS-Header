//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SAUIDecoratedText, SAUINanoImageResource;

@interface SASTComparisonEntity : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) SAUIDecoratedText *decoratedTitle;
@property (strong, nonatomic) SAUIDecoratedText *decoratedValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;

+ (id)comparisonEntity;
+ (id)comparisonEntityWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

