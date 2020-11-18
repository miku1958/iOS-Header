//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class EMMailbox, NSString;

@protocol EMMailboxBuilder <NSObject>

@property (nonatomic) BOOL canArchive;
@property (nonatomic) BOOL canContainMessages;
@property (nonatomic) BOOL descriptionUsesRealName;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) EMMailbox *parent;
@property (nonatomic) long long type;

@end
