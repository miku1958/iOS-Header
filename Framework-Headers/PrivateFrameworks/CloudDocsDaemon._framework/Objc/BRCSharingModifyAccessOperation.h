//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCDocumentItem, NSData, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BRCDocumentItem *_document;
    BOOL _allowAccess;
    NSData *_accessToken;
    NSString *_referenceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithItem:(id)arg1 allowAccess:(BOOL)arg2;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;

@end

