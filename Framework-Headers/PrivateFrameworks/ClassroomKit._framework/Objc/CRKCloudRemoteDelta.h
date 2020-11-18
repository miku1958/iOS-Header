//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CRKCloudRemoteDelta : NSObject
{
    NSDictionary *_changeRecordsByRecordType;
    NSDictionary *_deleteIdsByRecordType;
}

@property (readonly, nonatomic) NSDictionary *changeRecordIdsByRecordType;
@property (strong, nonatomic) NSDictionary *changeRecordsByRecordType; // @synthesize changeRecordsByRecordType=_changeRecordsByRecordType;
@property (strong, nonatomic) NSDictionary *deleteIdsByRecordType; // @synthesize deleteIdsByRecordType=_deleteIdsByRecordType;

+ (id)new;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChangedRecordsByRecordType:(id)arg1 deleteIdsByRecordType:(id)arg2;
- (BOOL)isEmpty;

@end
