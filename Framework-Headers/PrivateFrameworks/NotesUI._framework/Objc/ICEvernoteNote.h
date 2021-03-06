//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface ICEvernoteNote : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_content;
    NSDate *_created;
    NSDate *_updated;
    NSArray *_resources;
}

@property (strong, nonatomic) NSString *content; // @synthesize content=_content;
@property (strong, nonatomic) NSDate *created; // @synthesize created=_created;
@property (strong, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSDate *updated; // @synthesize updated=_updated;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

