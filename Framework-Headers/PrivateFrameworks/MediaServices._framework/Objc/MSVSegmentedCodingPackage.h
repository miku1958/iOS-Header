//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface MSVSegmentedCodingPackage : NSObject
{
    BOOL _needsInfoDictionaryUpdate;
    NSURL *_packageURL;
    Class _archivedClass;
    NSMutableDictionary *_segmentEncoderMap;
    NSMutableDictionary *_infoDictionary;
}

@property (readonly, nonatomic) NSDictionary *allVersions;
@property (strong, nonatomic) Class archivedClass; // @synthesize archivedClass=_archivedClass;
@property (strong, nonatomic) NSMutableDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property (copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
@property (strong, nonatomic) NSMutableDictionary *segmentEncoderMap; // @synthesize segmentEncoderMap=_segmentEncoderMap;

+ (id)packageTypeIdentifier;
- (void).cxx_destruct;
- (id)coderTypeForSegment:(id)arg1;
- (id)decodersWithError:(id *)arg1;
- (BOOL)deleteWithError:(id *)arg1;
- (id)encoderForSegment:(id)arg1 version:(long long)arg2;
- (id)initWithURL:(id)arg1;
- (void)reset;
- (BOOL)saveWithError:(id *)arg1;
- (void)setNeedsInfoDictionaryUpdate;
- (BOOL)writeWithError:(id *)arg1;

@end
