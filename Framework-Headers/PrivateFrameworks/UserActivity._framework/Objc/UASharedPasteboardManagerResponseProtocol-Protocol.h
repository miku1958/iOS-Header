//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSFileHandle, NSURL;

@protocol UASharedPasteboardManagerResponseProtocol <NSObject>
- (void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)writeLocalPasteboardToFile:(NSFileHandle *)arg1 itemDir:(NSURL *)arg2 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg3;
@end
