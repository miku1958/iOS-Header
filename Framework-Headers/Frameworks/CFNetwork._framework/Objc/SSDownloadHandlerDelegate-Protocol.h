//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class SSDownloadAuthenticationSession, SSDownloadHandler, SSDownloadHandlerSession, SSDownloadSession;

@protocol SSDownloadHandlerDelegate <NSObject>

@optional
- (void)downloadHandler:(SSDownloadHandler *)arg1 cancelSession:(SSDownloadSession *)arg2;
- (void)downloadHandler:(SSDownloadHandler *)arg1 handleAuthenticationSession:(SSDownloadAuthenticationSession *)arg2;
- (void)downloadHandler:(SSDownloadHandler *)arg1 handleSession:(SSDownloadHandlerSession *)arg2;
- (BOOL)downloadHandler:(SSDownloadHandler *)arg1 pauseSession:(SSDownloadSession *)arg2;
- (void)downloadHandlerDidDisconnect:(SSDownloadHandler *)arg1;
@end
