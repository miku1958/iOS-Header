//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CRKBookmark : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_urlString;
    NSArray *_childBookmarks;
}

@property (strong, nonatomic) NSArray *childBookmarks; // @synthesize childBookmarks=_childBookmarks;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFolder;

@end

