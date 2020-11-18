//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString;

@protocol PDAssertionCoordinatorExportedInterface <PDXPCServiceExportedInterface>
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 reason:(NSString *)arg3 handler:(void (^)(BOOL))arg4;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 isValid:(void (^)(BOOL))arg3;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 shouldInvalidateWhenBackgrounded:(BOOL)arg3;
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
@end
