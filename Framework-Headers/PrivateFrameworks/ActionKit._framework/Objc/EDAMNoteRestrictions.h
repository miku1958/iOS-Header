//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteRestrictions : FATObject
{
    NSNumber *_noUpdateTitle;
    NSNumber *_noUpdateContent;
    NSNumber *_noEmail;
    NSNumber *_noShare;
    NSNumber *_noSharePublicly;
}

@property (strong, nonatomic) NSNumber *noEmail; // @synthesize noEmail=_noEmail;
@property (strong, nonatomic) NSNumber *noShare; // @synthesize noShare=_noShare;
@property (strong, nonatomic) NSNumber *noSharePublicly; // @synthesize noSharePublicly=_noSharePublicly;
@property (strong, nonatomic) NSNumber *noUpdateContent; // @synthesize noUpdateContent=_noUpdateContent;
@property (strong, nonatomic) NSNumber *noUpdateTitle; // @synthesize noUpdateTitle=_noUpdateTitle;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
