//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CHKWidgetEnvironment, CHSWidget, NSDictionary, NSFileHandle, NSString;

@protocol _TtP9WidgetKit22WidgetExtensionSession_
- (void)attachPreviewAgentWithFrameworkPath:(NSString *)arg1 endpoint:(id)arg2 handler:(void (^)(BSAuditToken *, NSError *))arg3;
- (void)getDescriptorsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)getPlaceholdersWithEnvironment:(CHKWidgetEnvironment *)arg1 for:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)getTimelineFor:(CHSWidget *)arg1 into:(NSFileHandle *)arg2 environment:(CHKWidgetEnvironment *)arg3 isPreview:(BOOL)arg4 completion:(void (^)(NSError *))arg5;
- (void)handleURLSessionEventsFor:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)invalidate;
@end
