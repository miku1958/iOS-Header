//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary;

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain
{
}

@property (readonly, nonatomic) BOOL alwaysBreadcrumb; // @dynamic alwaysBreadcrumb;
@property (readonly, nonatomic, getter=isLegacyWorkspaceLoggingEnabled) BOOL legacyWorkspaceLoggingEnabled; // @dynamic legacyWorkspaceLoggingEnabled;
@property (readonly, nonatomic, getter=isMedusaEnabled) BOOL medusaEnabled; // @dynamic medusaEnabled;
@property (readonly, nonatomic) BOOL neverBreadcrumb; // @dynamic neverBreadcrumb;
@property (strong, nonatomic) NSDictionary *sideAppState; // @dynamic sideAppState;

- (void)_bindAndRegisterDefaults;

@end

