//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSAttributedString, PHPerson;

@interface PXPeopleNamePickerItem : NSObject
{
    PHPerson *_person;
    CNContact *_contact;
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
}

@property (readonly) CNContact *contact; // @synthesize contact=_contact;
@property (readonly) PHPerson *person; // @synthesize person=_person;
@property (readonly) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) NSAttributedString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 searchPrefix:(id)arg2;
- (id)initWithPerson:(id)arg1 searchPrefix:(id)arg2;

@end

