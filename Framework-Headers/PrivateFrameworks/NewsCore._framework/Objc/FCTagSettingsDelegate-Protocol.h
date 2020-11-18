//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCModifyTagSettingsCommand, NSString;

@protocol FCTagSettingsDelegate <NSObject>
- (void)accessTokenDidChangeForTagID:(NSString *)arg1;
- (void)accessTokenRemovedForTagID:(NSString *)arg1 userInitiated:(BOOL)arg2;
- (void)addModifyTagSettingsCommandToCommandQueue:(FCModifyTagSettingsCommand *)arg1;
@end
