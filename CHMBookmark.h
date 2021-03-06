//
//  CHMBookmark.h
//  ichm
//
//  Created by Robin Lu on 8/11/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class CHMFile;
@class CHMTag;

@interface CHMBookmark :  NSManagedObject  
{
}

@property (retain) NSString * url;
@property (retain) NSString * title;
@property (retain) NSDate * createdAt;
@property (retain) CHMFile * file;
@property (retain) NSSet* tags;

- (NSString*)tagsString;
+ (CHMBookmark *)bookmarkByURL:(NSString*)url withContext:(NSManagedObjectContext*)context;
- (void)setTagsString:(NSString*)tags;
@end

@interface CHMBookmark (CoreDataGeneratedAccessors)
- (void)addTagsObject:(CHMTag *)value;
- (void)removeTagsObject:(CHMTag *)value;
- (void)addTags:(NSSet *)value;
- (void)removeTags:(NSSet *)value;

@end

