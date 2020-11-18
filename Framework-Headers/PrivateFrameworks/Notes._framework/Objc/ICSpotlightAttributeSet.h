//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface ICSpotlightAttributeSet : NSObject
{
    NSString *_identifier;
    NSString *_objectIdentifier;
    NSDate *_modificationDate;
    NSString *_title;
    NSString *_contentText;
    NSArray *_authors;
}

@property (readonly, copy, nonatomic) NSArray *authors; // @synthesize authors=_authors;
@property (readonly, copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (readonly, copy, nonatomic) NSString *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)coreSpotlightAttributeSet;
- (id)coreSpotlightAttributeSetForUserActivity;
- (id)init;
- (id)initWithIdentifier:(id)arg1 objectIdentifier:(id)arg2 modificationDate:(id)arg3 title:(id)arg4 contentText:(id)arg5 authors:(id)arg6;

@end

