//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol SRRequestFetching, SRRequestReading;

@protocol SRSensorKitServiceServerReading
- (void)fetchAllDevices:(id<SRRequestReading>)arg1 idOnly:(BOOL)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchReaderMetadata:(id<SRRequestReading>)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)requestFileHandleForReading:(id<SRRequestFetching>)arg1 afterSegment:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)requestFileHandleForReading:(id<SRRequestFetching>)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)startRecording:(id<SRRequestReading>)arg1 reply:(void (^)(NSError *))arg2;
- (void)stopRecording:(id<SRRequestReading>)arg1 reply:(void (^)(NSError *))arg2;
@end
