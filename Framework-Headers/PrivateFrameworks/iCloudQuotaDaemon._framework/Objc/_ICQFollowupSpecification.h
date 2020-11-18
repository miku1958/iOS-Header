//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQLink, NSArray, NSDictionary, NSString;

@interface _ICQFollowupSpecification : NSObject
{
    NSDictionary *_serverDict;
    BOOL _forAccountGroup;
    NSString *_title;
    NSString *_message;
    NSString *_altMessage;
    NSArray *_links;
    NSString *_noteTitle;
    NSString *_noteMessage;
    NSString *_altNoteMessage;
    ICQLink *_noteActivateLink;
    ICQLink *_noteDismissLink;
    ICQLink *_noteClearLink;
}

@property (strong, nonatomic) NSString *altMessage; // @synthesize altMessage=_altMessage;
@property (strong, nonatomic) NSString *altNoteMessage; // @synthesize altNoteMessage=_altNoteMessage;
@property (nonatomic, getter=isForAccountGroup) BOOL forAccountGroup; // @synthesize forAccountGroup=_forAccountGroup;
@property (strong, nonatomic) NSArray *links; // @synthesize links=_links;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) ICQLink *noteActivateLink; // @synthesize noteActivateLink=_noteActivateLink;
@property (strong, nonatomic) ICQLink *noteClearLink; // @synthesize noteClearLink=_noteClearLink;
@property (strong, nonatomic) ICQLink *noteDismissLink; // @synthesize noteDismissLink=_noteDismissLink;
@property (strong, nonatomic) NSString *noteMessage; // @synthesize noteMessage=_noteMessage;
@property (strong, nonatomic) NSString *noteTitle; // @synthesize noteTitle=_noteTitle;
@property (strong, nonatomic) NSDictionary *serverDict;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (void)clearFollowupWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)followupActionForLink:(id)arg1;
- (id)followupActionForLink:(id)arg1 needsFlow:(BOOL)arg2;
- (id)init;
- (id)initWithServerDictionary:(id)arg1;
- (void)postFollowupWithController:(id)arg1;
- (void)postFollowupWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

