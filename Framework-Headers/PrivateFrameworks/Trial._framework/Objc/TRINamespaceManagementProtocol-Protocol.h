//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString, NSURL, TRIDownloadOptions;

@protocol TRINamespaceManagementProtocol
- (BOOL)deregisterNamespaceWithNamespaceName:(NSString *)arg1 error:(id *)arg2;
- (BOOL)registerNamespaceWithNamespaceName:(NSString *)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(NSURL *)arg3 applicationGroup:(NSString *)arg4 cloudKitContainerId:(int)arg5 error:(id *)arg6;
- (NSString *)startDownloadLevelsForFactors:(NSArray *)arg1 withNamespace:(NSString *)arg2 options:(TRIDownloadOptions *)arg3 error:(id *)arg4;
- (BOOL)startNamespaceDownloadWithName:(NSString *)arg1 options:(TRIDownloadOptions *)arg2 error:(id *)arg3;
@end
