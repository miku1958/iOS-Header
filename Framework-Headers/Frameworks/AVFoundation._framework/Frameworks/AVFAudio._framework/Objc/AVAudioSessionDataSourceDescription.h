//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface AVAudioSessionDataSourceDescription : NSObject
{
    void *_impl;
}

@property (readonly) NSNumber *dataSourceID;
@property (readonly) NSString *dataSourceName;
@property (readonly) NSString *location;
@property (readonly) NSString *orientation;
@property (readonly) NSString *preferredPolarPattern;
@property (readonly) NSString *selectedPolarPattern;
@property (readonly) NSArray *supportedPolarPatterns;

+ (id)privateCreateArray:(id)arg1 portID:(id)arg2 sessionID:(unsigned int)arg3;
- (void)configurePolarPatterns:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 andSessionID:(unsigned int)arg3;
- (id)initWithSessionID:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDataSource:(id)arg1;
- (struct DataSourceDescriptionImpl *)privateGetImplementation;
- (id)privateGetOwningPortID;
- (BOOL)privateMatchesRawDescription:(id)arg1;
- (BOOL)setPreferredPolarPattern:(id)arg1 error:(id *)arg2;

@end

