//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, NSArray;

@protocol INSearchForMessagesIntentExport <NSObject, JSExport>

@property (nonatomic) unsigned long long attributes;
@property (copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property (copy, nonatomic) NSArray *groupNames;
@property (copy, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSArray *notificationIdentifiers;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSArray *searchTerms;
@property (copy, nonatomic) NSArray *senders;

- (id)init;
@end
