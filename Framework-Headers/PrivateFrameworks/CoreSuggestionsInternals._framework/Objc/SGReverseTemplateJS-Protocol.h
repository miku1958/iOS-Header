//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary;

@protocol SGReverseTemplateJS
- (void)emailToJsonLd:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)emailToOutput:(NSDictionary *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
- (void)schemaOrgToOutput:(NSArray *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
- (void)shouldDownloadFull:(NSDictionary *)arg1 reply:(void (^)(BOOL))arg2;
- (void)textMessageToOutput:(NSDictionary *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
@end

