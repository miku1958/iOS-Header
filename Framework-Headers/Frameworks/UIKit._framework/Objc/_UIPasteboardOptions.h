//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _UIPasteboardOptions : NSObject
{
    BOOL _pinned;
    BOOL _localOnly;
    NSDate *_expirationDate;
}

@property (strong, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (nonatomic, getter=isLocalOnly) BOOL localOnly; // @synthesize localOnly=_localOnly;
@property (nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;

+ (id)optionsWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)arg1;

@end
