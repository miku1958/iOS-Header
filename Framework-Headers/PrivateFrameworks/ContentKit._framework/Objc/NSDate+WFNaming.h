//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface NSDate (WFNaming) <WFNaming, WFPropertyListObject, WFSerializableContent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)wf_formattedStringWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includeTimeForISO8601:(BOOL)arg5;
@end

