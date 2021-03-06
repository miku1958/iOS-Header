//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIContactSaveExecutor-Protocol.h>

@class CNUICoreContactEditingSession, NSString;

__attribute__((visibility("hidden")))
@interface CNUIEditingSessionSaveExecutor : NSObject <CNUIContactSaveExecutor>
{
    CNUICoreContactEditingSession *_editingSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNUICoreContactEditingSession *editingSession; // @synthesize editingSession=_editingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)executeSaveWithConfiguration:(id)arg1;
- (id)init;
- (id)initWithEditingSession:(id)arg1;

@end

