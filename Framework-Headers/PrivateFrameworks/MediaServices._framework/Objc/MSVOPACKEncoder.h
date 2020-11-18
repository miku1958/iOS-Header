//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

#import <MediaServices/MSVSegmentedSubEncoder-Protocol.h>

@class NSData, NSDictionary, NSMapTable, NSMutableArray, NSString;

@interface MSVOPACKEncoder : NSCoder <MSVSegmentedSubEncoder>
{
    BOOL _hasFinished;
    NSData *_encodedData;
    NSMutableArray *_objects;
    NSMapTable *_objectLookupTable;
    NSMutableArray *_wrapperStack;
    NSDictionary *_userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *encodedData; // @synthesize encodedData=_encodedData;
@property (nonatomic) BOOL hasFinished; // @synthesize hasFinished=_hasFinished;
@property (readonly, nonatomic) BOOL hasTopLevelData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMapTable *objectLookupTable; // @synthesize objectLookupTable=_objectLookupTable;
@property (readonly, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (readonly, nonatomic) NSMutableArray *wrapperStack; // @synthesize wrapperStack=_wrapperStack;

+ (id)encodedDataWithRootObject:(id)arg1 error:(id *)arg2;
+ (id)encodedDataWithRootObject:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)_convertNumber:(id)arg1;
- (id)_convertObject:(id)arg1;
- (void)_encodeNumber:(id)arg1 forKey:(id)arg2;
- (BOOL)allowsKeyedCoding;
- (void)beginEncodingPartialTopLevelObject:(id)arg1;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (id)encodedDataWithError:(id *)arg1;
- (void)finishEncoding;
- (void)finishEncodingPartialTopLevelObject;
- (void)finishEncodingWithError:(id *)arg1;
- (id)init;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (BOOL)requiresSecureCoding;

@end
