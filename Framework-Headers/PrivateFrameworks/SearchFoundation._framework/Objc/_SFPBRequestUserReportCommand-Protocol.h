//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBUserReportRequest;

@protocol _SFPBRequestUserReportCommand <NSObject>

@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBUserReportRequest *userReportRequest;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

