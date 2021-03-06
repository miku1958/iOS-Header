//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/ICRDSectionIdentifier-Protocol.h>
#import <NotesUI/NSCopying-Protocol.h>

@class NSString;

@interface ICRDNoteSectionIdentifier : NSObject <ICRDSectionIdentifier, NSCopying>
{
    long long _sectionType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *expansionStateContext;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;

+ (id)sortDescriptors;
+ (id)titles;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNoteSectionType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToICRDNoteSectionIdentifier:(id)arg1;

@end

