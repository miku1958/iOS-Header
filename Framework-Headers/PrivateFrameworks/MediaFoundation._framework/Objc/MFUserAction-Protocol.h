//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;
@protocol MFTimeStamp;

@protocol MFUserAction

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) id<MFTimeStamp> timeStamp;
@property (nonatomic, readonly) long long type;

@end

