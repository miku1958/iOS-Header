//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ObjCVersion;

@protocol CRStringDecoderProtocol
- (ObjCVersion *)addedByVersionWithError:(id *)arg1;
- (id)context;
- (void)decodeSubstring:(long long)arg1;
- (id)storageWithError:(id *)arg1;
- (long long)substringAddedByCount;
- (unsigned int)substringAddedByCounter:(long long)arg1;
- (unsigned int)substringAddedByReplica:(long long)arg1;
- (unsigned int)substringCharClock;
- (unsigned int)substringCharReplica;
- (unsigned int)substringChild:(long long)arg1;
- (long long)substringChildCount;
- (long long)substringCount;
- (unsigned int)substringLength;
- (ObjCVersion *)versionWithError:(id *)arg1;
@end
