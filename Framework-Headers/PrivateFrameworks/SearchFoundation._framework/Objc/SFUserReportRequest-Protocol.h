//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFUserReportRequest <NSObject>

@property (copy, nonatomic) NSString *affordanceText;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *dismissText;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *userReportOptions;

@end

