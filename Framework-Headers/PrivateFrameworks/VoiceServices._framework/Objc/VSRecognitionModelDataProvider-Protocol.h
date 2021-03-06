//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol VSRecognitionModelDataProvider <NSObject>
- (long long)valueCountForClassWithIdentifier:(NSString *)arg1 inModelWithIdentifier:(NSString *)arg2;

@optional
- (void)beginReportingChanges;
- (NSDictionary *)cacheValidityIdentifier;
- (BOOL)getValue:(id *)arg1 weight:(long long *)arg2 atIndex:(long long)arg3 forClassWithIdentifier:(NSString *)arg4 inModelWithIdentifier:(NSString *)arg5;
- (BOOL)isCacheValidityIdentifierValid:(NSDictionary *)arg1;
- (NSString *)phoneticValueAtIndex:(long long)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
- (void)stopReportingChanges;
- (NSString *)valueAtIndex:(long long)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
@end

