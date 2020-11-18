//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSCopying-Protocol.h>

@class NSString;

@interface CNContactSection : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_identifier;
    NSString *_sortKey;
    struct _NSRange _range;
}

@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (strong, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

