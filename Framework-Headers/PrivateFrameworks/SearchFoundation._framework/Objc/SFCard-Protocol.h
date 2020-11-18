//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol SFCard <NSObject>

@property (copy, nonatomic) NSString *cardId;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) BOOL flexibleSectionOrder;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy, nonatomic) NSURL *urlValue;

@end

