//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSIIndexToken : NSObject
{
    short _category;
    short _owningCategory;
    NSString *_text;
    NSString *_identifier;
}

@property (readonly, nonatomic) short category; // @synthesize category=_category;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) short owningCategory; // @synthesize owningCategory=_owningCategory;
@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void)dealloc;
- (id)description;
- (id)initWithText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;

@end

