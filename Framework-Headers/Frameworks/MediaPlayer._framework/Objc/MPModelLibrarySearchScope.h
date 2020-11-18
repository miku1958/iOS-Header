//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPModelKind, MPPropertySet, NSString;

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding>
{
    shared_ptr_c450ebdb _coreScope;
    MPModelKind *_itemKind;
    NSString *_name;
    MPPropertySet *_itemProperties;
}

@property (readonly, nonatomic) shared_ptr_c450ebdb coreScope;
@property (strong, nonatomic) MPModelKind *itemKind; // @synthesize itemKind=_itemKind;
@property (readonly, copy, nonatomic) MPPropertySet *itemProperties; // @synthesize itemProperties=_itemProperties;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemKind:(id)arg1 name:(id)arg2 properties:(id)arg3;

@end
