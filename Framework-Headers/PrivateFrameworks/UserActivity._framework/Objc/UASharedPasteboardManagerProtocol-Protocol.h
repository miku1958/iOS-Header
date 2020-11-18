//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class UASharedPasteboardInfo;

@protocol UASharedPasteboardManagerProtocol <NSObject>
- (void)clearLocalPasteboardInformation;
- (void)fetchRemotePasteboardForProcess:(int)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
- (void)fetchRemotePasteboardStatus:(void (^)(BOOL))arg1;
- (void)fetchRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
- (void)localPasteboardTypesDidChange:(UASharedPasteboardInfo *)arg1 forGeneration:(unsigned long long)arg2;
@end

