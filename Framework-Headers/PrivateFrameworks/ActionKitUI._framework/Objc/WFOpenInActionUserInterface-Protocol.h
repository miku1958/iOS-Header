//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/WFRemoteUserInterface-Protocol.h>

@class WFFileStorageServiceResult;

@protocol WFOpenInActionUserInterface <WFRemoteUserInterface>
- (void)showWithFile:(WFFileStorageServiceResult *)arg1 contentManaged:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

