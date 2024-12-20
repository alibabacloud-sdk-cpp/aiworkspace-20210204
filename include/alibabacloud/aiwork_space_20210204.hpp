// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIWORKSPACE20210204_H_
#define ALIBABACLOUD_AIWORKSPACE20210204_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AIWorkSpace20210204 {
class CodeSourceItem : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeCommit{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  CodeSourceItem() {}

  explicit CodeSourceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    if (codeCommit) {
      res["CodeCommit"] = boost::any(*codeCommit);
    }
    if (codeRepo) {
      res["CodeRepo"] = boost::any(*codeRepo);
    }
    if (codeRepoAccessToken) {
      res["CodeRepoAccessToken"] = boost::any(*codeRepoAccessToken);
    }
    if (codeRepoUserName) {
      res["CodeRepoUserName"] = boost::any(*codeRepoUserName);
    }
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
    if (m.find("CodeCommit") != m.end() && !m["CodeCommit"].empty()) {
      codeCommit = make_shared<string>(boost::any_cast<string>(m["CodeCommit"]));
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      codeRepo = make_shared<string>(boost::any_cast<string>(m["CodeRepo"]));
    }
    if (m.find("CodeRepoAccessToken") != m.end() && !m["CodeRepoAccessToken"].empty()) {
      codeRepoAccessToken = make_shared<string>(boost::any_cast<string>(m["CodeRepoAccessToken"]));
    }
    if (m.find("CodeRepoUserName") != m.end() && !m["CodeRepoUserName"].empty()) {
      codeRepoUserName = make_shared<string>(boost::any_cast<string>(m["CodeRepoUserName"]));
    }
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CodeSourceItem() = default;
};
class Collection : public Darabonba::Model {
public:
  shared_ptr<string> collectionName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> userId{};

  Collection() {}

  explicit Collection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionName) {
      res["CollectionName"] = boost::any(*collectionName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectionName") != m.end() && !m["CollectionName"].empty()) {
      collectionName = make_shared<string>(boost::any_cast<string>(m["CollectionName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~Collection() = default;
};
class Label : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  Label() {}

  explicit Label(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~Label() = default;
};
class DatasetVersion : public Darabonba::Model {
public:
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> options{};
  shared_ptr<string> property{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> uri{};
  shared_ptr<string> versionName{};

  DatasetVersion() {}

  explicit DatasetVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~DatasetVersion() = default;
};
class Dataset : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<DatasetVersion> latestVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> options{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> property{};
  shared_ptr<string> providerType{};
  shared_ptr<string> sourceDatasetId{};
  shared_ptr<string> sourceDatasetVersion{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> tagTemplateType{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Dataset() {}

  explicit Dataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = latestVersion ? boost::any(latestVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (providerType) {
      res["ProviderType"] = boost::any(*providerType);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    if (sourceDatasetVersion) {
      res["SourceDatasetVersion"] = boost::any(*sourceDatasetVersion);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (tagTemplateType) {
      res["TagTemplateType"] = boost::any(*tagTemplateType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestVersion"].type()) {
        DatasetVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestVersion"]));
        latestVersion = make_shared<DatasetVersion>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("ProviderType") != m.end() && !m["ProviderType"].empty()) {
      providerType = make_shared<string>(boost::any_cast<string>(m["ProviderType"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
    if (m.find("SourceDatasetVersion") != m.end() && !m["SourceDatasetVersion"].empty()) {
      sourceDatasetVersion = make_shared<string>(boost::any_cast<string>(m["SourceDatasetVersion"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TagTemplateType") != m.end() && !m["TagTemplateType"].empty()) {
      tagTemplateType = make_shared<string>(boost::any_cast<string>(m["TagTemplateType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Dataset() = default;
};
class DatasetLabel : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DatasetLabel() {}

  explicit DatasetLabel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DatasetLabel() = default;
};
class ExperimentLabel : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ExperimentLabel() {}

  explicit ExperimentLabel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ExperimentLabel() = default;
};
class RunLabel : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> key{};
  shared_ptr<string> runId{};
  shared_ptr<string> value{};

  RunLabel() {}

  explicit RunLabel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~RunLabel() = default;
};
class RunMetric : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<long> step{};
  shared_ptr<long> timestamp{};
  shared_ptr<double> value{};

  RunMetric() {}

  explicit RunMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~RunMetric() = default;
};
class RunParam : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  RunParam() {}

  explicit RunParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~RunParam() = default;
};
class Run : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<RunLabel>> labels{};
  shared_ptr<vector<RunMetric>> metrics{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<vector<RunParam>> params{};
  shared_ptr<string> requestId{};
  shared_ptr<string> runId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Run() {}

  explicit Run(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<RunLabel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunLabel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<RunLabel>>(expect1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<RunMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<RunMetric>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<RunParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<RunParam>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Run() = default;
};
class Experiment : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> artifactUri{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<ExperimentLabel>> labels{};
  shared_ptr<Run> latestRun{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tensorboardLogUri{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Experiment() {}

  explicit Experiment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (artifactUri) {
      res["ArtifactUri"] = boost::any(*artifactUri);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestRun) {
      res["LatestRun"] = latestRun ? boost::any(latestRun->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboardLogUri) {
      res["TensorboardLogUri"] = boost::any(*tensorboardLogUri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ArtifactUri") != m.end() && !m["ArtifactUri"].empty()) {
      artifactUri = make_shared<string>(boost::any_cast<string>(m["ArtifactUri"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ExperimentLabel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExperimentLabel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ExperimentLabel>>(expect1);
      }
    }
    if (m.find("LatestRun") != m.end() && !m["LatestRun"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestRun"].type()) {
        Run model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestRun"]));
        latestRun = make_shared<Run>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TensorboardLogUri") != m.end() && !m["TensorboardLogUri"].empty()) {
      tensorboardLogUri = make_shared<string>(boost::any_cast<string>(m["TensorboardLogUri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Experiment() = default;
};
class LabelInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  LabelInfo() {}

  explicit LabelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~LabelInfo() = default;
};
class ModelVersion : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<map<string, boost::any>> compressionSpec{};
  shared_ptr<map<string, boost::any>> evaluationSpec{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> formatType{};
  shared_ptr<string> frameworkType{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<map<string, boost::any>> inferenceSpec{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<string> options{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<map<string, boost::any>> trainingSpec{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> versionDescription{};
  shared_ptr<string> versionName{};

  ModelVersion() {}

  explicit ModelVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (compressionSpec) {
      res["CompressionSpec"] = boost::any(*compressionSpec);
    }
    if (evaluationSpec) {
      res["EvaluationSpec"] = boost::any(*evaluationSpec);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (inferenceSpec) {
      res["InferenceSpec"] = boost::any(*inferenceSpec);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trainingSpec) {
      res["TrainingSpec"] = boost::any(*trainingSpec);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("CompressionSpec") != m.end() && !m["CompressionSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompressionSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compressionSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EvaluationSpec") != m.end() && !m["EvaluationSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EvaluationSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      evaluationSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InferenceSpec") != m.end() && !m["InferenceSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InferenceSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrainingSpec") != m.end() && !m["TrainingSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TrainingSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      trainingSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ModelVersion() = default;
};
class Model : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<ModelVersion> latestVersion{};
  shared_ptr<string> modelDescription{};
  shared_ptr<string> modelDoc{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<long> orderNumber{};
  shared_ptr<string> origin{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> provider{};
  shared_ptr<string> task{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Model() {}

  explicit Model(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = latestVersion ? boost::any(latestVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelDescription) {
      res["ModelDescription"] = boost::any(*modelDescription);
    }
    if (modelDoc) {
      res["ModelDoc"] = boost::any(*modelDoc);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (orderNumber) {
      res["OrderNumber"] = boost::any(*orderNumber);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestVersion"].type()) {
        ModelVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestVersion"]));
        latestVersion = make_shared<ModelVersion>(model1);
      }
    }
    if (m.find("ModelDescription") != m.end() && !m["ModelDescription"].empty()) {
      modelDescription = make_shared<string>(boost::any_cast<string>(m["ModelDescription"]));
    }
    if (m.find("ModelDoc") != m.end() && !m["ModelDoc"].empty()) {
      modelDoc = make_shared<string>(boost::any_cast<string>(m["ModelDoc"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("OrderNumber") != m.end() && !m["OrderNumber"].empty()) {
      orderNumber = make_shared<long>(boost::any_cast<long>(m["OrderNumber"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Model() = default;
};
class Trial : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<map<string, boost::any>>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> trialId{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Trial() {}

  explicit Trial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trialId) {
      res["TrialId"] = boost::any(*trialId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      labels = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrialId") != m.end() && !m["TrialId"].empty()) {
      trialId = make_shared<string>(boost::any_cast<string>(m["TrialId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Trial() = default;
};
class TrialLabel : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> key{};
  shared_ptr<string> trialId{};
  shared_ptr<string> value{};

  TrialLabel() {}

  explicit TrialLabel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (trialId) {
      res["TrialId"] = boost::any(*trialId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("TrialId") != m.end() && !m["TrialId"].empty()) {
      trialId = make_shared<string>(boost::any_cast<string>(m["TrialId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TrialLabel() = default;
};
class AddImageRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AddImageRequestLabels() {}

  explicit AddImageRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~AddImageRequestLabels() = default;
};
class AddImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> description{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUri{};
  shared_ptr<vector<AddImageRequestLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> workspaceId{};

  AddImageRequest() {}

  explicit AddImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<AddImageRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddImageRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<AddImageRequestLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~AddImageRequest() = default;
};
class AddImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  AddImageResponseBody() {}

  explicit AddImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddImageResponseBody() = default;
};
class AddImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageResponseBody> body{};

  AddImageResponse() {}

  explicit AddImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageResponse() = default;
};
class AddImageLabelsRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AddImageLabelsRequestLabels() {}

  explicit AddImageLabelsRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~AddImageLabelsRequestLabels() = default;
};
class AddImageLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddImageLabelsRequestLabels>> labels{};

  AddImageLabelsRequest() {}

  explicit AddImageLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<AddImageLabelsRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddImageLabelsRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<AddImageLabelsRequestLabels>>(expect1);
      }
    }
  }


  virtual ~AddImageLabelsRequest() = default;
};
class AddImageLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddImageLabelsResponseBody() {}

  explicit AddImageLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddImageLabelsResponseBody() = default;
};
class AddImageLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageLabelsResponseBody> body{};

  AddImageLabelsResponse() {}

  explicit AddImageLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddImageLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageLabelsResponse() = default;
};
class AddMemberRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddMemberRoleResponseBody() {}

  explicit AddMemberRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddMemberRoleResponseBody() = default;
};
class AddMemberRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddMemberRoleResponseBody> body{};

  AddMemberRoleResponse() {}

  explicit AddMemberRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMemberRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMemberRoleResponseBody>(model1);
      }
    }
  }


  virtual ~AddMemberRoleResponse() = default;
};
class CreateCodeSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeCommit{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> workspaceId{};

  CreateCodeSourceRequest() {}

  explicit CreateCodeSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    if (codeCommit) {
      res["CodeCommit"] = boost::any(*codeCommit);
    }
    if (codeRepo) {
      res["CodeRepo"] = boost::any(*codeRepo);
    }
    if (codeRepoAccessToken) {
      res["CodeRepoAccessToken"] = boost::any(*codeRepoAccessToken);
    }
    if (codeRepoUserName) {
      res["CodeRepoUserName"] = boost::any(*codeRepoUserName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
    if (m.find("CodeCommit") != m.end() && !m["CodeCommit"].empty()) {
      codeCommit = make_shared<string>(boost::any_cast<string>(m["CodeCommit"]));
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      codeRepo = make_shared<string>(boost::any_cast<string>(m["CodeRepo"]));
    }
    if (m.find("CodeRepoAccessToken") != m.end() && !m["CodeRepoAccessToken"].empty()) {
      codeRepoAccessToken = make_shared<string>(boost::any_cast<string>(m["CodeRepoAccessToken"]));
    }
    if (m.find("CodeRepoUserName") != m.end() && !m["CodeRepoUserName"].empty()) {
      codeRepoUserName = make_shared<string>(boost::any_cast<string>(m["CodeRepoUserName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateCodeSourceRequest() = default;
};
class CreateCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> requestId{};

  CreateCodeSourceResponseBody() {}

  explicit CreateCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCodeSourceResponseBody() = default;
};
class CreateCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCodeSourceResponseBody> body{};

  CreateCodeSourceResponse() {}

  explicit CreateCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCodeSourceResponse() = default;
};
class CreateDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> description{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> options{};
  shared_ptr<string> property{};
  shared_ptr<string> provider{};
  shared_ptr<string> providerType{};
  shared_ptr<string> sourceDatasetId{};
  shared_ptr<string> sourceDatasetVersion{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> versionDescription{};
  shared_ptr<vector<Label>> versionLabels{};
  shared_ptr<string> workspaceId{};

  CreateDatasetRequest() {}

  explicit CreateDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (providerType) {
      res["ProviderType"] = boost::any(*providerType);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    if (sourceDatasetVersion) {
      res["SourceDatasetVersion"] = boost::any(*sourceDatasetVersion);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionLabels) {
      vector<boost::any> temp1;
      for(auto item1:*versionLabels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VersionLabels"] = boost::any(temp1);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("ProviderType") != m.end() && !m["ProviderType"].empty()) {
      providerType = make_shared<string>(boost::any_cast<string>(m["ProviderType"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
    if (m.find("SourceDatasetVersion") != m.end() && !m["SourceDatasetVersion"].empty()) {
      sourceDatasetVersion = make_shared<string>(boost::any_cast<string>(m["SourceDatasetVersion"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionLabels") != m.end() && !m["VersionLabels"].empty()) {
      if (typeid(vector<boost::any>) == m["VersionLabels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VersionLabels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versionLabels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateDatasetRequest() = default;
};
class CreateDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> requestId{};

  CreateDatasetResponseBody() {}

  explicit CreateDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatasetResponseBody() = default;
};
class CreateDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetResponseBody> body{};

  CreateDatasetResponse() {}

  explicit CreateDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetResponse() = default;
};
class CreateDatasetLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};

  CreateDatasetLabelsRequest() {}

  explicit CreateDatasetLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
  }


  virtual ~CreateDatasetLabelsRequest() = default;
};
class CreateDatasetLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDatasetLabelsResponseBody() {}

  explicit CreateDatasetLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatasetLabelsResponseBody() = default;
};
class CreateDatasetLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetLabelsResponseBody> body{};

  CreateDatasetLabelsResponse() {}

  explicit CreateDatasetLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetLabelsResponse() = default;
};
class CreateDatasetVersionRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> description{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> options{};
  shared_ptr<string> property{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> uri{};

  CreateDatasetVersionRequest() {}

  explicit CreateDatasetVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CreateDatasetVersionRequest() = default;
};
class CreateDatasetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> versionName{};

  CreateDatasetVersionResponseBody() {}

  explicit CreateDatasetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateDatasetVersionResponseBody() = default;
};
class CreateDatasetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetVersionResponseBody> body{};

  CreateDatasetVersionResponse() {}

  explicit CreateDatasetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetVersionResponse() = default;
};
class CreateDatasetVersionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};

  CreateDatasetVersionLabelsRequest() {}

  explicit CreateDatasetVersionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
  }


  virtual ~CreateDatasetVersionLabelsRequest() = default;
};
class CreateDatasetVersionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDatasetVersionLabelsResponseBody() {}

  explicit CreateDatasetVersionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatasetVersionLabelsResponseBody() = default;
};
class CreateDatasetVersionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetVersionLabelsResponseBody> body{};

  CreateDatasetVersionLabelsResponse() {}

  explicit CreateDatasetVersionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetVersionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetVersionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetVersionLabelsResponse() = default;
};
class CreateExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> artifactUri{};
  shared_ptr<vector<LabelInfo>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> workspaceId{};

  CreateExperimentRequest() {}

  explicit CreateExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (artifactUri) {
      res["ArtifactUri"] = boost::any(*artifactUri);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ArtifactUri") != m.end() && !m["ArtifactUri"].empty()) {
      artifactUri = make_shared<string>(boost::any_cast<string>(m["ArtifactUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<LabelInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LabelInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<LabelInfo>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateExperimentRequest() = default;
};
class CreateExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> requestId{};

  CreateExperimentResponseBody() {}

  explicit CreateExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateExperimentResponseBody() = default;
};
class CreateExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExperimentResponseBody> body{};

  CreateExperimentResponse() {}

  explicit CreateExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExperimentResponse() = default;
};
class CreateMemberRequestMembers : public Darabonba::Model {
public:
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> userId{};

  CreateMemberRequestMembers() {}

  explicit CreateMemberRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateMemberRequestMembers() = default;
};
class CreateMemberRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMemberRequestMembers>> members{};

  CreateMemberRequest() {}

  explicit CreateMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<CreateMemberRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMemberRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<CreateMemberRequestMembers>>(expect1);
      }
    }
  }


  virtual ~CreateMemberRequest() = default;
};
class CreateMemberResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> memberId{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> userId{};

  CreateMemberResponseBodyMembers() {}

  explicit CreateMemberResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateMemberResponseBodyMembers() = default;
};
class CreateMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMemberResponseBodyMembers>> members{};
  shared_ptr<string> requestId{};

  CreateMemberResponseBody() {}

  explicit CreateMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<CreateMemberResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMemberResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<CreateMemberResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMemberResponseBody() = default;
};
class CreateMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMemberResponseBody> body{};

  CreateMemberResponse() {}

  explicit CreateMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMemberResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMemberResponse() = default;
};
class CreateModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> modelDescription{};
  shared_ptr<string> modelDoc{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<long> orderNumber{};
  shared_ptr<string> origin{};
  shared_ptr<string> task{};
  shared_ptr<string> workspaceId{};

  CreateModelRequest() {}

  explicit CreateModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (modelDescription) {
      res["ModelDescription"] = boost::any(*modelDescription);
    }
    if (modelDoc) {
      res["ModelDoc"] = boost::any(*modelDoc);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (orderNumber) {
      res["OrderNumber"] = boost::any(*orderNumber);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("ModelDescription") != m.end() && !m["ModelDescription"].empty()) {
      modelDescription = make_shared<string>(boost::any_cast<string>(m["ModelDescription"]));
    }
    if (m.find("ModelDoc") != m.end() && !m["ModelDoc"].empty()) {
      modelDoc = make_shared<string>(boost::any_cast<string>(m["ModelDoc"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("OrderNumber") != m.end() && !m["OrderNumber"].empty()) {
      orderNumber = make_shared<long>(boost::any_cast<long>(m["OrderNumber"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateModelRequest() = default;
};
class CreateModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> modelId{};
  shared_ptr<string> requestId{};

  CreateModelResponseBody() {}

  explicit CreateModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateModelResponseBody() = default;
};
class CreateModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelResponseBody> body{};

  CreateModelResponse() {}

  explicit CreateModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelResponse() = default;
};
class CreateModelLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};

  CreateModelLabelsRequest() {}

  explicit CreateModelLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
  }


  virtual ~CreateModelLabelsRequest() = default;
};
class CreateModelLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateModelLabelsResponseBody() {}

  explicit CreateModelLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateModelLabelsResponseBody() = default;
};
class CreateModelLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelLabelsResponseBody> body{};

  CreateModelLabelsResponse() {}

  explicit CreateModelLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateModelLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelLabelsResponse() = default;
};
class CreateModelVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<map<string, boost::any>> compressionSpec{};
  shared_ptr<map<string, boost::any>> evaluationSpec{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> formatType{};
  shared_ptr<string> frameworkType{};
  shared_ptr<map<string, boost::any>> inferenceSpec{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<string> options{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<map<string, boost::any>> trainingSpec{};
  shared_ptr<string> uri{};
  shared_ptr<string> versionDescription{};
  shared_ptr<string> versionName{};

  CreateModelVersionRequest() {}

  explicit CreateModelVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (compressionSpec) {
      res["CompressionSpec"] = boost::any(*compressionSpec);
    }
    if (evaluationSpec) {
      res["EvaluationSpec"] = boost::any(*evaluationSpec);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (inferenceSpec) {
      res["InferenceSpec"] = boost::any(*inferenceSpec);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trainingSpec) {
      res["TrainingSpec"] = boost::any(*trainingSpec);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("CompressionSpec") != m.end() && !m["CompressionSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompressionSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compressionSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EvaluationSpec") != m.end() && !m["EvaluationSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EvaluationSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      evaluationSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("InferenceSpec") != m.end() && !m["InferenceSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InferenceSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrainingSpec") != m.end() && !m["TrainingSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TrainingSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      trainingSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateModelVersionRequest() = default;
};
class CreateModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> versionName{};

  CreateModelVersionResponseBody() {}

  explicit CreateModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateModelVersionResponseBody() = default;
};
class CreateModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelVersionResponseBody> body{};

  CreateModelVersionResponse() {}

  explicit CreateModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelVersionResponse() = default;
};
class CreateModelVersionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};

  CreateModelVersionLabelsRequest() {}

  explicit CreateModelVersionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
  }


  virtual ~CreateModelVersionLabelsRequest() = default;
};
class CreateModelVersionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateModelVersionLabelsResponseBody() {}

  explicit CreateModelVersionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateModelVersionLabelsResponseBody() = default;
};
class CreateModelVersionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelVersionLabelsResponseBody> body{};

  CreateModelVersionLabelsResponse() {}

  explicit CreateModelVersionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateModelVersionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelVersionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelVersionLabelsResponse() = default;
};
class CreateProductOrdersRequestProductsInstanceProperties : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateProductOrdersRequestProductsInstanceProperties() {}

  explicit CreateProductOrdersRequestProductsInstanceProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateProductOrdersRequestProductsInstanceProperties() = default;
};
class CreateProductOrdersRequestProducts : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> duration{};
  shared_ptr<vector<CreateProductOrdersRequestProductsInstanceProperties>> instanceProperties{};
  shared_ptr<string> orderType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> productCode{};

  CreateProductOrdersRequestProducts() {}

  explicit CreateProductOrdersRequestProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceProperties) {
      vector<boost::any> temp1;
      for(auto item1:*instanceProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceProperties"] = boost::any(temp1);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceProperties") != m.end() && !m["InstanceProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceProperties"].type()) {
        vector<CreateProductOrdersRequestProductsInstanceProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProductOrdersRequestProductsInstanceProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceProperties = make_shared<vector<CreateProductOrdersRequestProductsInstanceProperties>>(expect1);
      }
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~CreateProductOrdersRequestProducts() = default;
};
class CreateProductOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<vector<CreateProductOrdersRequestProducts>> products{};

  CreateProductOrdersRequest() {}

  explicit CreateProductOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Products"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("Products") != m.end() && !m["Products"].empty()) {
      if (typeid(vector<boost::any>) == m["Products"].type()) {
        vector<CreateProductOrdersRequestProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProductOrdersRequestProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<CreateProductOrdersRequestProducts>>(expect1);
      }
    }
  }


  virtual ~CreateProductOrdersRequest() = default;
};
class CreateProductOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyProductRequestId{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateProductOrdersResponseBody() {}

  explicit CreateProductOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyProductRequestId) {
      res["BuyProductRequestId"] = boost::any(*buyProductRequestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyProductRequestId") != m.end() && !m["BuyProductRequestId"].empty()) {
      buyProductRequestId = make_shared<string>(boost::any_cast<string>(m["BuyProductRequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProductOrdersResponseBody() = default;
};
class CreateProductOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductOrdersResponseBody> body{};

  CreateProductOrdersResponse() {}

  explicit CreateProductOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProductOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductOrdersResponse() = default;
};
class CreateRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> name{};
  shared_ptr<vector<RunParam>> params{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};

  CreateRunRequest() {}

  explicit CreateRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<RunParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<RunParam>>(expect1);
      }
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~CreateRunRequest() = default;
};
class CreateRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> runId{};
  shared_ptr<string> requestId{};

  CreateRunResponseBody() {}

  explicit CreateRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateRunResponseBody() = default;
};
class CreateRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRunResponseBody> body{};

  CreateRunResponse() {}

  explicit CreateRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRunResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRunResponse() = default;
};
class CreateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<string>> envTypes{};
  shared_ptr<string> workspaceName{};

  CreateWorkspaceRequest() {}

  explicit CreateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (envTypes) {
      res["EnvTypes"] = boost::any(*envTypes);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EnvTypes") != m.end() && !m["EnvTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EnvTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EnvTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      envTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~CreateWorkspaceRequest() = default;
};
class CreateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  CreateWorkspaceResponseBody() {}

  explicit CreateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateWorkspaceResponseBody() = default;
};
class CreateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkspaceResponseBody> body{};

  CreateWorkspaceResponse() {}

  explicit CreateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResponse() = default;
};
class CreateWorkspaceResourceRequestResourcesLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateWorkspaceResourceRequestResourcesLabels() {}

  explicit CreateWorkspaceResourceRequestResourcesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateWorkspaceResourceRequestResourcesLabels() = default;
};
class CreateWorkspaceResourceRequestResourcesQuotas : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateWorkspaceResourceRequestResourcesQuotas() {}

  explicit CreateWorkspaceResourceRequestResourcesQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateWorkspaceResourceRequestResourcesQuotas() = default;
};
class CreateWorkspaceResourceRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> envType{};
  shared_ptr<string> groupName{};
  shared_ptr<bool> isDefault{};
  shared_ptr<vector<CreateWorkspaceResourceRequestResourcesLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> productType{};
  shared_ptr<vector<CreateWorkspaceResourceRequestResourcesQuotas>> quotas{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> spec{};
  shared_ptr<string> workspaceId{};

  CreateWorkspaceResourceRequestResources() {}

  explicit CreateWorkspaceResourceRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<CreateWorkspaceResourceRequestResourcesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkspaceResourceRequestResourcesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<CreateWorkspaceResourceRequestResourcesLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<CreateWorkspaceResourceRequestResourcesQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkspaceResourceRequestResourcesQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<CreateWorkspaceResourceRequestResourcesQuotas>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Spec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateWorkspaceResourceRequestResources() = default;
};
class CreateWorkspaceResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> option{};
  shared_ptr<vector<CreateWorkspaceResourceRequestResources>> resources{};

  CreateWorkspaceResourceRequest() {}

  explicit CreateWorkspaceResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<CreateWorkspaceResourceRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkspaceResourceRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<CreateWorkspaceResourceRequestResources>>(expect1);
      }
    }
  }


  virtual ~CreateWorkspaceResourceRequest() = default;
};
class CreateWorkspaceResourceResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateWorkspaceResourceResponseBodyResources() {}

  explicit CreateWorkspaceResourceResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateWorkspaceResourceResponseBodyResources() = default;
};
class CreateWorkspaceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateWorkspaceResourceResponseBodyResources>> resources{};
  shared_ptr<long> totalCount{};

  CreateWorkspaceResourceResponseBody() {}

  explicit CreateWorkspaceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<CreateWorkspaceResourceResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkspaceResourceResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<CreateWorkspaceResourceResponseBodyResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CreateWorkspaceResourceResponseBody() = default;
};
class CreateWorkspaceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkspaceResourceResponseBody> body{};

  CreateWorkspaceResourceResponse() {}

  explicit CreateWorkspaceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateWorkspaceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkspaceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResourceResponse() = default;
};
class DeleteCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> requestId{};

  DeleteCodeSourceResponseBody() {}

  explicit DeleteCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCodeSourceResponseBody() = default;
};
class DeleteCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCodeSourceResponseBody> body{};

  DeleteCodeSourceResponse() {}

  explicit DeleteCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCodeSourceResponse() = default;
};
class DeleteDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetResponseBody() {}

  explicit DeleteDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDatasetResponseBody() = default;
};
class DeleteDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetResponseBody> body{};

  DeleteDatasetResponse() {}

  explicit DeleteDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetResponse() = default;
};
class DeleteDatasetLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelKeys{};

  DeleteDatasetLabelsRequest() {}

  explicit DeleteDatasetLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
  }


  virtual ~DeleteDatasetLabelsRequest() = default;
};
class DeleteDatasetLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetLabelsResponseBody() {}

  explicit DeleteDatasetLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDatasetLabelsResponseBody() = default;
};
class DeleteDatasetLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetLabelsResponseBody> body{};

  DeleteDatasetLabelsResponse() {}

  explicit DeleteDatasetLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetLabelsResponse() = default;
};
class DeleteDatasetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetVersionResponseBody() {}

  explicit DeleteDatasetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDatasetVersionResponseBody() = default;
};
class DeleteDatasetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetVersionResponseBody> body{};

  DeleteDatasetVersionResponse() {}

  explicit DeleteDatasetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetVersionResponse() = default;
};
class DeleteDatasetVersionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keys{};

  DeleteDatasetVersionLabelsRequest() {}

  explicit DeleteDatasetVersionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      keys = make_shared<string>(boost::any_cast<string>(m["Keys"]));
    }
  }


  virtual ~DeleteDatasetVersionLabelsRequest() = default;
};
class DeleteDatasetVersionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetVersionLabelsResponseBody() {}

  explicit DeleteDatasetVersionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDatasetVersionLabelsResponseBody() = default;
};
class DeleteDatasetVersionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetVersionLabelsResponseBody> body{};

  DeleteDatasetVersionLabelsResponse() {}

  explicit DeleteDatasetVersionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetVersionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetVersionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetVersionLabelsResponse() = default;
};
class DeleteExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExperimentResponseBody() {}

  explicit DeleteExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteExperimentResponseBody() = default;
};
class DeleteExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentResponseBody> body{};

  DeleteExperimentResponse() {}

  explicit DeleteExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentResponse() = default;
};
class DeleteExperimentLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExperimentLabelResponseBody() {}

  explicit DeleteExperimentLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteExperimentLabelResponseBody() = default;
};
class DeleteExperimentLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentLabelResponseBody> body{};

  DeleteExperimentLabelResponse() {}

  explicit DeleteExperimentLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteExperimentLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentLabelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentLabelResponse() = default;
};
class DeleteMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberIds{};

  DeleteMembersRequest() {}

  explicit DeleteMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberIds) {
      res["MemberIds"] = boost::any(*memberIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberIds") != m.end() && !m["MemberIds"].empty()) {
      memberIds = make_shared<string>(boost::any_cast<string>(m["MemberIds"]));
    }
  }


  virtual ~DeleteMembersRequest() = default;
};
class DeleteMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteMembersResponseBody() {}

  explicit DeleteMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteMembersResponseBody() = default;
};
class DeleteMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMembersResponseBody> body{};

  DeleteMembersResponse() {}

  explicit DeleteMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMembersResponse() = default;
};
class DeleteModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelResponseBody() {}

  explicit DeleteModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteModelResponseBody() = default;
};
class DeleteModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelResponseBody> body{};

  DeleteModelResponse() {}

  explicit DeleteModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelResponse() = default;
};
class DeleteModelLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelKeys{};

  DeleteModelLabelsRequest() {}

  explicit DeleteModelLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
  }


  virtual ~DeleteModelLabelsRequest() = default;
};
class DeleteModelLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelLabelsResponseBody() {}

  explicit DeleteModelLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteModelLabelsResponseBody() = default;
};
class DeleteModelLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelLabelsResponseBody> body{};

  DeleteModelLabelsResponse() {}

  explicit DeleteModelLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteModelLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelLabelsResponse() = default;
};
class DeleteModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelVersionResponseBody() {}

  explicit DeleteModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteModelVersionResponseBody() = default;
};
class DeleteModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelVersionResponseBody> body{};

  DeleteModelVersionResponse() {}

  explicit DeleteModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelVersionResponse() = default;
};
class DeleteModelVersionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelKeys{};

  DeleteModelVersionLabelsRequest() {}

  explicit DeleteModelVersionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
  }


  virtual ~DeleteModelVersionLabelsRequest() = default;
};
class DeleteModelVersionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelVersionLabelsResponseBody() {}

  explicit DeleteModelVersionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteModelVersionLabelsResponseBody() = default;
};
class DeleteModelVersionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelVersionLabelsResponseBody> body{};

  DeleteModelVersionLabelsResponse() {}

  explicit DeleteModelVersionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteModelVersionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelVersionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelVersionLabelsResponse() = default;
};
class DeleteRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRunResponseBody() {}

  explicit DeleteRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteRunResponseBody() = default;
};
class DeleteRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRunResponseBody> body{};

  DeleteRunResponse() {}

  explicit DeleteRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRunResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRunResponse() = default;
};
class DeleteRunLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRunLabelResponseBody() {}

  explicit DeleteRunLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteRunLabelResponseBody() = default;
};
class DeleteRunLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRunLabelResponseBody> body{};

  DeleteRunLabelResponse() {}

  explicit DeleteRunLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRunLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRunLabelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRunLabelResponse() = default;
};
class DeleteWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWorkspaceResponseBody() {}

  explicit DeleteWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteWorkspaceResponseBody() = default;
};
class DeleteWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkspaceResponseBody> body{};

  DeleteWorkspaceResponse() {}

  explicit DeleteWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceResponse() = default;
};
class DeleteWorkspaceResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> labels{};
  shared_ptr<string> option{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> resourceType{};

  DeleteWorkspaceResourceRequest() {}

  explicit DeleteWorkspaceResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DeleteWorkspaceResourceRequest() = default;
};
class DeleteWorkspaceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourceIds{};

  DeleteWorkspaceResourceResponseBody() {}

  explicit DeleteWorkspaceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteWorkspaceResourceResponseBody() = default;
};
class DeleteWorkspaceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkspaceResourceResponseBody> body{};

  DeleteWorkspaceResourceResponse() {}

  explicit DeleteWorkspaceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteWorkspaceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkspaceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceResourceResponse() = default;
};
class GetCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeCommit{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetCodeSourceResponseBody() {}

  explicit GetCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    if (codeCommit) {
      res["CodeCommit"] = boost::any(*codeCommit);
    }
    if (codeRepo) {
      res["CodeRepo"] = boost::any(*codeRepo);
    }
    if (codeRepoAccessToken) {
      res["CodeRepoAccessToken"] = boost::any(*codeRepoAccessToken);
    }
    if (codeRepoUserName) {
      res["CodeRepoUserName"] = boost::any(*codeRepoUserName);
    }
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
    if (m.find("CodeCommit") != m.end() && !m["CodeCommit"].empty()) {
      codeCommit = make_shared<string>(boost::any_cast<string>(m["CodeCommit"]));
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      codeRepo = make_shared<string>(boost::any_cast<string>(m["CodeRepo"]));
    }
    if (m.find("CodeRepoAccessToken") != m.end() && !m["CodeRepoAccessToken"].empty()) {
      codeRepoAccessToken = make_shared<string>(boost::any_cast<string>(m["CodeRepoAccessToken"]));
    }
    if (m.find("CodeRepoUserName") != m.end() && !m["CodeRepoUserName"].empty()) {
      codeRepoUserName = make_shared<string>(boost::any_cast<string>(m["CodeRepoUserName"]));
    }
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetCodeSourceResponseBody() = default;
};
class GetCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCodeSourceResponseBody> body{};

  GetCodeSourceResponse() {}

  explicit GetCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetCodeSourceResponse() = default;
};
class GetDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<DatasetVersion> latestVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> options{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> property{};
  shared_ptr<string> provider{};
  shared_ptr<string> providerType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceDatasetId{};
  shared_ptr<string> sourceDatasetVersion{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> tagTemplateType{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetDatasetResponseBody() {}

  explicit GetDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = latestVersion ? boost::any(latestVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (providerType) {
      res["ProviderType"] = boost::any(*providerType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    if (sourceDatasetVersion) {
      res["SourceDatasetVersion"] = boost::any(*sourceDatasetVersion);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (tagTemplateType) {
      res["TagTemplateType"] = boost::any(*tagTemplateType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestVersion"].type()) {
        DatasetVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestVersion"]));
        latestVersion = make_shared<DatasetVersion>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("ProviderType") != m.end() && !m["ProviderType"].empty()) {
      providerType = make_shared<string>(boost::any_cast<string>(m["ProviderType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
    if (m.find("SourceDatasetVersion") != m.end() && !m["SourceDatasetVersion"].empty()) {
      sourceDatasetVersion = make_shared<string>(boost::any_cast<string>(m["SourceDatasetVersion"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TagTemplateType") != m.end() && !m["TagTemplateType"].empty()) {
      tagTemplateType = make_shared<string>(boost::any_cast<string>(m["TagTemplateType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasetResponseBody() = default;
};
class GetDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetResponseBody> body{};

  GetDatasetResponse() {}

  explicit GetDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetResponse() = default;
};
class GetDatasetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> options{};
  shared_ptr<string> property{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> uri{};
  shared_ptr<string> versionName{};

  GetDatasetVersionResponseBody() {}

  explicit GetDatasetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetDatasetVersionResponseBody() = default;
};
class GetDatasetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetVersionResponseBody> body{};

  GetDatasetVersionResponse() {}

  explicit GetDatasetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatasetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetVersionResponse() = default;
};
class GetDefaultWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetDefaultWorkspaceRequest() {}

  explicit GetDefaultWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetDefaultWorkspaceRequest() = default;
};
class GetDefaultWorkspaceResponseBodyConditions : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> type{};

  GetDefaultWorkspaceResponseBodyConditions() {}

  explicit GetDefaultWorkspaceResponseBodyConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDefaultWorkspaceResponseBodyConditions() = default;
};
class GetDefaultWorkspaceResponseBodyOwner : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userKp{};
  shared_ptr<string> userName{};

  GetDefaultWorkspaceResponseBodyOwner() {}

  explicit GetDefaultWorkspaceResponseBodyOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetDefaultWorkspaceResponseBodyOwner() = default;
};
class GetDefaultWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetDefaultWorkspaceResponseBodyConditions>> conditions{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<string>> envTypes{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<GetDefaultWorkspaceResponseBodyOwner> owner{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  GetDefaultWorkspaceResponseBody() {}

  explicit GetDefaultWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conditions"] = boost::any(temp1);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (envTypes) {
      res["EnvTypes"] = boost::any(*envTypes);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (owner) {
      res["Owner"] = owner ? boost::any(owner->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["Conditions"].type()) {
        vector<GetDefaultWorkspaceResponseBodyConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDefaultWorkspaceResponseBodyConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<GetDefaultWorkspaceResponseBodyConditions>>(expect1);
      }
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EnvTypes") != m.end() && !m["EnvTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EnvTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EnvTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      envTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      if (typeid(map<string, boost::any>) == m["Owner"].type()) {
        GetDefaultWorkspaceResponseBodyOwner model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Owner"]));
        owner = make_shared<GetDefaultWorkspaceResponseBodyOwner>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~GetDefaultWorkspaceResponseBody() = default;
};
class GetDefaultWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDefaultWorkspaceResponseBody> body{};

  GetDefaultWorkspaceResponse() {}

  explicit GetDefaultWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDefaultWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDefaultWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetDefaultWorkspaceResponse() = default;
};
class GetExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetExperimentRequest() {}

  explicit GetExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetExperimentRequest() = default;
};
class GetExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Experiment> body{};

  GetExperimentResponse() {}

  explicit GetExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Experiment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Experiment>(model1);
      }
    }
  }


  virtual ~GetExperimentResponse() = default;
};
class GetImageRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetImageRequest() {}

  explicit GetImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetImageRequest() = default;
};
class GetImageResponseBodyLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetImageResponseBodyLabels() {}

  explicit GetImageResponseBodyLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetImageResponseBodyLabels() = default;
};
class GetImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageUri{};
  shared_ptr<vector<GetImageResponseBodyLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> parentUserId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetImageResponseBody() {}

  explicit GetImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentUserId) {
      res["ParentUserId"] = boost::any(*parentUserId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<GetImageResponseBodyLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImageResponseBodyLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<GetImageResponseBodyLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentUserId") != m.end() && !m["ParentUserId"].empty()) {
      parentUserId = make_shared<string>(boost::any_cast<string>(m["ParentUserId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetImageResponseBody() = default;
};
class GetImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageResponseBody> body{};

  GetImageResponse() {}

  explicit GetImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageResponse() = default;
};
class GetMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> userId{};

  GetMemberRequest() {}

  explicit GetMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetMemberRequest() = default;
};
class GetMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> userId{};

  GetMemberResponseBody() {}

  explicit GetMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetMemberResponseBody() = default;
};
class GetMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMemberResponseBody> body{};

  GetMemberResponse() {}

  explicit GetMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetMemberResponse() = default;
};
class GetModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<ModelVersion> latestVersion{};
  shared_ptr<string> modelDescription{};
  shared_ptr<string> modelDoc{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<long> orderNumber{};
  shared_ptr<string> origin{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> provider{};
  shared_ptr<string> requestId{};
  shared_ptr<string> task{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetModelResponseBody() {}

  explicit GetModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = latestVersion ? boost::any(latestVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelDescription) {
      res["ModelDescription"] = boost::any(*modelDescription);
    }
    if (modelDoc) {
      res["ModelDoc"] = boost::any(*modelDoc);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (orderNumber) {
      res["OrderNumber"] = boost::any(*orderNumber);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestVersion"].type()) {
        ModelVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestVersion"]));
        latestVersion = make_shared<ModelVersion>(model1);
      }
    }
    if (m.find("ModelDescription") != m.end() && !m["ModelDescription"].empty()) {
      modelDescription = make_shared<string>(boost::any_cast<string>(m["ModelDescription"]));
    }
    if (m.find("ModelDoc") != m.end() && !m["ModelDoc"].empty()) {
      modelDoc = make_shared<string>(boost::any_cast<string>(m["ModelDoc"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("OrderNumber") != m.end() && !m["OrderNumber"].empty()) {
      orderNumber = make_shared<long>(boost::any_cast<long>(m["OrderNumber"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetModelResponseBody() = default;
};
class GetModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelResponseBody> body{};

  GetModelResponse() {}

  explicit GetModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelResponse() = default;
};
class GetModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<map<string, boost::any>> compressionSpec{};
  shared_ptr<map<string, boost::any>> evaluationSpec{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> formatType{};
  shared_ptr<string> frameworkType{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<map<string, boost::any>> inferenceSpec{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<string> options{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<map<string, boost::any>> trainingSpec{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> versionDescription{};
  shared_ptr<string> versionName{};

  GetModelVersionResponseBody() {}

  explicit GetModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (compressionSpec) {
      res["CompressionSpec"] = boost::any(*compressionSpec);
    }
    if (evaluationSpec) {
      res["EvaluationSpec"] = boost::any(*evaluationSpec);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (inferenceSpec) {
      res["InferenceSpec"] = boost::any(*inferenceSpec);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trainingSpec) {
      res["TrainingSpec"] = boost::any(*trainingSpec);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("CompressionSpec") != m.end() && !m["CompressionSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompressionSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compressionSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EvaluationSpec") != m.end() && !m["EvaluationSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EvaluationSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      evaluationSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InferenceSpec") != m.end() && !m["InferenceSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InferenceSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrainingSpec") != m.end() && !m["TrainingSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TrainingSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      trainingSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetModelVersionResponseBody() = default;
};
class GetModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelVersionResponseBody> body{};

  GetModelVersionResponse() {}

  explicit GetModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelVersionResponse() = default;
};
class GetPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> creator{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<string> option{};
  shared_ptr<string> resource{};

  GetPermissionRequest() {}

  explicit GetPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
  }


  virtual ~GetPermissionRequest() = default;
};
class GetPermissionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> creator{};
  shared_ptr<string> labelsShrink{};
  shared_ptr<string> option{};
  shared_ptr<string> resource{};

  GetPermissionShrinkRequest() {}

  explicit GetPermissionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (labelsShrink) {
      res["Labels"] = boost::any(*labelsShrink);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labelsShrink = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
  }


  virtual ~GetPermissionShrinkRequest() = default;
};
class GetPermissionResponseBodyPermissionRules : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> entityAccessType{};

  GetPermissionResponseBodyPermissionRules() {}

  explicit GetPermissionResponseBodyPermissionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (entityAccessType) {
      res["EntityAccessType"] = boost::any(*entityAccessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("EntityAccessType") != m.end() && !m["EntityAccessType"].empty()) {
      entityAccessType = make_shared<string>(boost::any_cast<string>(m["EntityAccessType"]));
    }
  }


  virtual ~GetPermissionResponseBodyPermissionRules() = default;
};
class GetPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> permissionCode{};
  shared_ptr<vector<GetPermissionResponseBodyPermissionRules>> permissionRules{};
  shared_ptr<string> requestId{};

  GetPermissionResponseBody() {}

  explicit GetPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCode) {
      res["PermissionCode"] = boost::any(*permissionCode);
    }
    if (permissionRules) {
      vector<boost::any> temp1;
      for(auto item1:*permissionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCode") != m.end() && !m["PermissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["PermissionCode"]));
    }
    if (m.find("PermissionRules") != m.end() && !m["PermissionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionRules"].type()) {
        vector<GetPermissionResponseBodyPermissionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPermissionResponseBodyPermissionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionRules = make_shared<vector<GetPermissionResponseBodyPermissionRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPermissionResponseBody() = default;
};
class GetPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPermissionResponseBody> body{};

  GetPermissionResponse() {}

  explicit GetPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~GetPermissionResponse() = default;
};
class GetRunRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetRunRequest() {}

  explicit GetRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetRunRequest() = default;
};
class GetRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Run> body{};

  GetRunResponse() {}

  explicit GetRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Run model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Run>(model1);
      }
    }
  }


  virtual ~GetRunResponse() = default;
};
class GetWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetWorkspaceRequest() {}

  explicit GetWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetWorkspaceRequest() = default;
};
class GetWorkspaceResponseBodyOwner : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userKp{};
  shared_ptr<string> userName{};

  GetWorkspaceResponseBodyOwner() {}

  explicit GetWorkspaceResponseBodyOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetWorkspaceResponseBodyOwner() = default;
};
class GetWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> adminNames{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<string>> envTypes{};
  shared_ptr<map<string, boost::any>> extraInfos{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<bool> isDefault{};
  shared_ptr<GetWorkspaceResponseBodyOwner> owner{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  GetWorkspaceResponseBody() {}

  explicit GetWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminNames) {
      res["AdminNames"] = boost::any(*adminNames);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (envTypes) {
      res["EnvTypes"] = boost::any(*envTypes);
    }
    if (extraInfos) {
      res["ExtraInfos"] = boost::any(*extraInfos);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (owner) {
      res["Owner"] = owner ? boost::any(owner->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminNames") != m.end() && !m["AdminNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdminNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdminNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adminNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EnvTypes") != m.end() && !m["EnvTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EnvTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EnvTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      envTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExtraInfos") != m.end() && !m["ExtraInfos"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfos"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfos = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      if (typeid(map<string, boost::any>) == m["Owner"].type()) {
        GetWorkspaceResponseBodyOwner model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Owner"]));
        owner = make_shared<GetWorkspaceResponseBodyOwner>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~GetWorkspaceResponseBody() = default;
};
class GetWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkspaceResponseBody> body{};

  GetWorkspaceResponse() {}

  explicit GetWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkspaceResponse() = default;
};
class ListCodeSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListCodeSourcesRequest() {}

  explicit ListCodeSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListCodeSourcesRequest() = default;
};
class ListCodeSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CodeSourceItem>> codeSources{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListCodeSourcesResponseBody() {}

  explicit ListCodeSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSources) {
      vector<boost::any> temp1;
      for(auto item1:*codeSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CodeSources"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSources") != m.end() && !m["CodeSources"].empty()) {
      if (typeid(vector<boost::any>) == m["CodeSources"].type()) {
        vector<CodeSourceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CodeSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CodeSourceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        codeSources = make_shared<vector<CodeSourceItem>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCodeSourcesResponseBody() = default;
};
class ListCodeSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCodeSourcesResponseBody> body{};

  ListCodeSourcesResponse() {}

  explicit ListCodeSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCodeSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCodeSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCodeSourcesResponse() = default;
};
class ListDatasetVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourcesTypes{};
  shared_ptr<string> labelKeys{};
  shared_ptr<string> lableValues{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> properties{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceTypes{};

  ListDatasetVersionsRequest() {}

  explicit ListDatasetVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourcesTypes) {
      res["DataSourcesTypes"] = boost::any(*dataSourcesTypes);
    }
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    if (lableValues) {
      res["LableValues"] = boost::any(*lableValues);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceTypes) {
      res["SourceTypes"] = boost::any(*sourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourcesTypes") != m.end() && !m["DataSourcesTypes"].empty()) {
      dataSourcesTypes = make_shared<string>(boost::any_cast<string>(m["DataSourcesTypes"]));
    }
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
    if (m.find("LableValues") != m.end() && !m["LableValues"].empty()) {
      lableValues = make_shared<string>(boost::any_cast<string>(m["LableValues"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceTypes") != m.end() && !m["SourceTypes"].empty()) {
      sourceTypes = make_shared<string>(boost::any_cast<string>(m["SourceTypes"]));
    }
  }


  virtual ~ListDatasetVersionsRequest() = default;
};
class ListDatasetVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetVersion>> datasetVersions{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDatasetVersionsResponseBody() {}

  explicit ListDatasetVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersions) {
      vector<boost::any> temp1;
      for(auto item1:*datasetVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetVersions"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersions") != m.end() && !m["DatasetVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetVersions"].type()) {
        vector<DatasetVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetVersions = make_shared<vector<DatasetVersion>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDatasetVersionsResponseBody() = default;
};
class ListDatasetVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasetVersionsResponseBody> body{};

  ListDatasetVersionsResponse() {}

  explicit ListDatasetVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDatasetVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetVersionsResponse() = default;
};
class ListDatasetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceTypes{};
  shared_ptr<string> dataTypes{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> properties{};
  shared_ptr<string> provider{};
  shared_ptr<string> sourceDatasetId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceTypes{};
  shared_ptr<string> workspaceId{};

  ListDatasetsRequest() {}

  explicit ListDatasetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceTypes) {
      res["DataSourceTypes"] = boost::any(*dataSourceTypes);
    }
    if (dataTypes) {
      res["DataTypes"] = boost::any(*dataTypes);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceTypes) {
      res["SourceTypes"] = boost::any(*sourceTypes);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceTypes") != m.end() && !m["DataSourceTypes"].empty()) {
      dataSourceTypes = make_shared<string>(boost::any_cast<string>(m["DataSourceTypes"]));
    }
    if (m.find("DataTypes") != m.end() && !m["DataTypes"].empty()) {
      dataTypes = make_shared<string>(boost::any_cast<string>(m["DataTypes"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceTypes") != m.end() && !m["SourceTypes"].empty()) {
      sourceTypes = make_shared<string>(boost::any_cast<string>(m["SourceTypes"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasetsRequest() = default;
};
class ListDatasetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Dataset>> datasets{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDatasetsResponseBody() {}

  explicit ListDatasetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<Dataset> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Dataset model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<Dataset>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDatasetsResponseBody() = default;
};
class ListDatasetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasetsResponseBody> body{};

  ListDatasetsResponse() {}

  explicit ListDatasetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDatasetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetsResponse() = default;
};
class ListExperimentRequestOptions : public Darabonba::Model {
public:
  shared_ptr<string> matchNameExactly{};

  ListExperimentRequestOptions() {}

  explicit ListExperimentRequestOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchNameExactly) {
      res["match_name_exactly"] = boost::any(*matchNameExactly);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match_name_exactly") != m.end() && !m["match_name_exactly"].empty()) {
      matchNameExactly = make_shared<string>(boost::any_cast<string>(m["match_name_exactly"]));
    }
  }


  virtual ~ListExperimentRequestOptions() = default;
};
class ListExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> labels{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<ListExperimentRequestOptions> options{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageToken{};
  shared_ptr<string> sortBy{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListExperimentRequest() {}

  explicit ListExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(map<string, boost::any>) == m["Options"].type()) {
        ListExperimentRequestOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Options"]));
        options = make_shared<ListExperimentRequestOptions>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<long>(boost::any_cast<long>(m["PageToken"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListExperimentRequest() = default;
};
class ListExperimentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> labels{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> optionsShrink{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageToken{};
  shared_ptr<string> sortBy{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListExperimentShrinkRequest() {}

  explicit ListExperimentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (optionsShrink) {
      res["Options"] = boost::any(*optionsShrink);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      optionsShrink = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<long>(boost::any_cast<long>(m["PageToken"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListExperimentShrinkRequest() = default;
};
class ListExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Experiment>> experiments{};
  shared_ptr<long> nextPageToken{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};

  ListExperimentResponseBody() {}

  explicit ListExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experiments) {
      vector<boost::any> temp1;
      for(auto item1:*experiments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Experiments"] = boost::any(temp1);
    }
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Experiments") != m.end() && !m["Experiments"].empty()) {
      if (typeid(vector<boost::any>) == m["Experiments"].type()) {
        vector<Experiment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Experiments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Experiment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        experiments = make_shared<vector<Experiment>>(expect1);
      }
    }
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<long>(boost::any_cast<long>(m["NextPageToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListExperimentResponseBody() = default;
};
class ListExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentResponseBody> body{};

  ListExperimentResponse() {}

  explicit ListExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentResponse() = default;
};
class ListImageLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> labelFilter{};
  shared_ptr<string> labelKeys{};
  shared_ptr<string> region{};
  shared_ptr<string> workspaceId{};

  ListImageLabelsRequest() {}

  explicit ListImageLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (labelFilter) {
      res["LabelFilter"] = boost::any(*labelFilter);
    }
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("LabelFilter") != m.end() && !m["LabelFilter"].empty()) {
      labelFilter = make_shared<string>(boost::any_cast<string>(m["LabelFilter"]));
    }
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListImageLabelsRequest() = default;
};
class ListImageLabelsResponseBodyLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListImageLabelsResponseBodyLabels() {}

  explicit ListImageLabelsResponseBodyLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListImageLabelsResponseBodyLabels() = default;
};
class ListImageLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListImageLabelsResponseBodyLabels>> labels{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListImageLabelsResponseBody() {}

  explicit ListImageLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListImageLabelsResponseBodyLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImageLabelsResponseBodyLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListImageLabelsResponseBodyLabels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListImageLabelsResponseBody() = default;
};
class ListImageLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListImageLabelsResponseBody> body{};

  ListImageLabelsResponse() {}

  explicit ListImageLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListImageLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImageLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListImageLabelsResponse() = default;
};
class ListImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentUserId{};
  shared_ptr<string> query{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> userId{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListImagesRequest() {}

  explicit ListImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentUserId) {
      res["ParentUserId"] = boost::any(*parentUserId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentUserId") != m.end() && !m["ParentUserId"].empty()) {
      parentUserId = make_shared<string>(boost::any_cast<string>(m["ParentUserId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListImagesRequest() = default;
};
class ListImagesResponseBodyImagesLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListImagesResponseBodyImagesLabels() {}

  explicit ListImagesResponseBodyImagesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesLabels() = default;
};
class ListImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUri{};
  shared_ptr<vector<ListImagesResponseBodyImagesLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> parentUserId{};
  shared_ptr<long> size{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  ListImagesResponseBodyImages() {}

  explicit ListImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentUserId) {
      res["ParentUserId"] = boost::any(*parentUserId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListImagesResponseBodyImagesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImagesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListImagesResponseBodyImagesLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentUserId") != m.end() && !m["ParentUserId"].empty()) {
      parentUserId = make_shared<string>(boost::any_cast<string>(m["ParentUserId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListImagesResponseBodyImages() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListImagesResponseBodyImages>> images{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListImagesResponseBody() {}

  explicit ListImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListImagesResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListImagesResponseBodyImages>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListImagesResponseBody() = default;
};
class ListImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListImagesResponseBody> body{};

  ListImagesResponse() {}

  explicit ListImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListImagesResponse() = default;
};
class ListMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> roles{};

  ListMembersRequest() {}

  explicit ListMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      roles = make_shared<string>(boost::any_cast<string>(m["Roles"]));
    }
  }


  virtual ~ListMembersRequest() = default;
};
class ListMembersResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> userId{};

  ListMembersResponseBodyMembers() {}

  explicit ListMembersResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListMembersResponseBodyMembers() = default;
};
class ListMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMembersResponseBodyMembers>> members{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMembersResponseBody() {}

  explicit ListMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<ListMembersResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMembersResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<ListMembersResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMembersResponseBody() = default;
};
class ListMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMembersResponseBody> body{};

  ListMembersResponse() {}

  explicit ListMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListMembersResponse() = default;
};
class ListModelVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<string> formatType{};
  shared_ptr<string> frameworkType{};
  shared_ptr<string> label{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> versionName{};

  ListModelVersionsRequest() {}

  explicit ListModelVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListModelVersionsRequest() = default;
};
class ListModelVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ModelVersion>> versions{};

  ListModelVersionsResponseBody() {}

  explicit ListModelVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<ModelVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ModelVersion>>(expect1);
      }
    }
  }


  virtual ~ListModelVersionsResponseBody() = default;
};
class ListModelVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelVersionsResponseBody> body{};

  ListModelVersionsResponse() {}

  explicit ListModelVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListModelVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelVersionsResponse() = default;
};
class ListModelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> collections{};
  shared_ptr<string> domain{};
  shared_ptr<string> label{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<string> order{};
  shared_ptr<string> origin{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> provider{};
  shared_ptr<string> query{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> task{};
  shared_ptr<string> workspaceId{};

  ListModelsRequest() {}

  explicit ListModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collections) {
      res["Collections"] = boost::any(*collections);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collections") != m.end() && !m["Collections"].empty()) {
      collections = make_shared<string>(boost::any_cast<string>(m["Collections"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListModelsRequest() = default;
};
class ListModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Model>> models{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListModelsResponseBody() {}

  explicit ListModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (models) {
      vector<boost::any> temp1;
      for(auto item1:*models){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Models"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Models") != m.end() && !m["Models"].empty()) {
      if (typeid(vector<boost::any>) == m["Models"].type()) {
        vector<Model> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Models"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Model model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        models = make_shared<vector<Model>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListModelsResponseBody() = default;
};
class ListModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelsResponseBody> body{};

  ListModelsResponse() {}

  explicit ListModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelsResponse() = default;
};
class ListPermissionsResponseBodyPermissionsPermissionRules : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> entityAccessType{};

  ListPermissionsResponseBodyPermissionsPermissionRules() {}

  explicit ListPermissionsResponseBodyPermissionsPermissionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (entityAccessType) {
      res["EntityAccessType"] = boost::any(*entityAccessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("EntityAccessType") != m.end() && !m["EntityAccessType"].empty()) {
      entityAccessType = make_shared<string>(boost::any_cast<string>(m["EntityAccessType"]));
    }
  }


  virtual ~ListPermissionsResponseBodyPermissionsPermissionRules() = default;
};
class ListPermissionsResponseBodyPermissions : public Darabonba::Model {
public:
  shared_ptr<string> permissionCode{};
  shared_ptr<vector<ListPermissionsResponseBodyPermissionsPermissionRules>> permissionRules{};

  ListPermissionsResponseBodyPermissions() {}

  explicit ListPermissionsResponseBodyPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCode) {
      res["PermissionCode"] = boost::any(*permissionCode);
    }
    if (permissionRules) {
      vector<boost::any> temp1;
      for(auto item1:*permissionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCode") != m.end() && !m["PermissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["PermissionCode"]));
    }
    if (m.find("PermissionRules") != m.end() && !m["PermissionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionRules"].type()) {
        vector<ListPermissionsResponseBodyPermissionsPermissionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPermissionsResponseBodyPermissionsPermissionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionRules = make_shared<vector<ListPermissionsResponseBodyPermissionsPermissionRules>>(expect1);
      }
    }
  }


  virtual ~ListPermissionsResponseBodyPermissions() = default;
};
class ListPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPermissionsResponseBodyPermissions>> permissions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPermissionsResponseBody() {}

  explicit ListPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<ListPermissionsResponseBodyPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Permissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPermissionsResponseBodyPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissions = make_shared<vector<ListPermissionsResponseBodyPermissions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPermissionsResponseBody() = default;
};
class ListPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPermissionsResponseBody> body{};

  ListPermissionsResponse() {}

  explicit ListPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPermissionsResponse() = default;
};
class ListProductsRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCodes{};
  shared_ptr<string> serviceCodes{};
  shared_ptr<bool> verbose{};

  ListProductsRequest() {}

  explicit ListProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCodes) {
      res["ProductCodes"] = boost::any(*productCodes);
    }
    if (serviceCodes) {
      res["ServiceCodes"] = boost::any(*serviceCodes);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCodes") != m.end() && !m["ProductCodes"].empty()) {
      productCodes = make_shared<string>(boost::any_cast<string>(m["ProductCodes"]));
    }
    if (m.find("ServiceCodes") != m.end() && !m["ServiceCodes"].empty()) {
      serviceCodes = make_shared<string>(boost::any_cast<string>(m["ServiceCodes"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~ListProductsRequest() = default;
};
class ListProductsResponseBodyProducts : public Darabonba::Model {
public:
  shared_ptr<bool> hasPermissionToPurchase{};
  shared_ptr<bool> isPurchased{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productInstanceId{};
  shared_ptr<string> purchaseUrl{};

  ListProductsResponseBodyProducts() {}

  explicit ListProductsResponseBodyProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasPermissionToPurchase) {
      res["HasPermissionToPurchase"] = boost::any(*hasPermissionToPurchase);
    }
    if (isPurchased) {
      res["IsPurchased"] = boost::any(*isPurchased);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productInstanceId) {
      res["ProductInstanceId"] = boost::any(*productInstanceId);
    }
    if (purchaseUrl) {
      res["PurchaseUrl"] = boost::any(*purchaseUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasPermissionToPurchase") != m.end() && !m["HasPermissionToPurchase"].empty()) {
      hasPermissionToPurchase = make_shared<bool>(boost::any_cast<bool>(m["HasPermissionToPurchase"]));
    }
    if (m.find("IsPurchased") != m.end() && !m["IsPurchased"].empty()) {
      isPurchased = make_shared<bool>(boost::any_cast<bool>(m["IsPurchased"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductInstanceId") != m.end() && !m["ProductInstanceId"].empty()) {
      productInstanceId = make_shared<string>(boost::any_cast<string>(m["ProductInstanceId"]));
    }
    if (m.find("PurchaseUrl") != m.end() && !m["PurchaseUrl"].empty()) {
      purchaseUrl = make_shared<string>(boost::any_cast<string>(m["PurchaseUrl"]));
    }
  }


  virtual ~ListProductsResponseBodyProducts() = default;
};
class ListProductsResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<bool> isOpen{};
  shared_ptr<string> openUrl{};
  shared_ptr<string> serviceCode{};

  ListProductsResponseBodyServices() {}

  explicit ListProductsResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isOpen) {
      res["IsOpen"] = boost::any(*isOpen);
    }
    if (openUrl) {
      res["OpenUrl"] = boost::any(*openUrl);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsOpen") != m.end() && !m["IsOpen"].empty()) {
      isOpen = make_shared<bool>(boost::any_cast<bool>(m["IsOpen"]));
    }
    if (m.find("OpenUrl") != m.end() && !m["OpenUrl"].empty()) {
      openUrl = make_shared<string>(boost::any_cast<string>(m["OpenUrl"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~ListProductsResponseBodyServices() = default;
};
class ListProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductsResponseBodyProducts>> products{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListProductsResponseBodyServices>> services{};

  ListProductsResponseBody() {}

  explicit ListProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Products"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Products") != m.end() && !m["Products"].empty()) {
      if (typeid(vector<boost::any>) == m["Products"].type()) {
        vector<ListProductsResponseBodyProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsResponseBodyProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<ListProductsResponseBodyProducts>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<ListProductsResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListProductsResponseBodyServices>>(expect1);
      }
    }
  }


  virtual ~ListProductsResponseBody() = default;
};
class ListProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductsResponseBody> body{};

  ListProductsResponse() {}

  explicit ListProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductsResponse() = default;
};
class ListQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListQuotasRequest() {}

  explicit ListQuotasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListQuotasRequest() = default;
};
class ListQuotasResponseBodyQuotasSpecs : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListQuotasResponseBodyQuotasSpecs() {}

  explicit ListQuotasResponseBodyQuotasSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotasSpecs() = default;
};
class ListQuotasResponseBodyQuotas : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaType{};
  shared_ptr<vector<ListQuotasResponseBodyQuotasSpecs>> specs{};

  ListQuotasResponseBodyQuotas() {}

  explicit ListQuotasResponseBodyQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (specs) {
      vector<boost::any> temp1;
      for(auto item1:*specs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Specs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("Specs") != m.end() && !m["Specs"].empty()) {
      if (typeid(vector<boost::any>) == m["Specs"].type()) {
        vector<ListQuotasResponseBodyQuotasSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Specs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotasSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specs = make_shared<vector<ListQuotasResponseBodyQuotasSpecs>>(expect1);
      }
    }
  }


  virtual ~ListQuotasResponseBodyQuotas() = default;
};
class ListQuotasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotasResponseBodyQuotas>> quotas{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListQuotasResponseBody() {}

  explicit ListQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<ListQuotasResponseBodyQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<ListQuotasResponseBodyQuotas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListQuotasResponseBody() = default;
};
class ListQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotasResponseBody> body{};

  ListQuotasResponse() {}

  explicit ListQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotasResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotasResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> labels{};
  shared_ptr<string> option{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productTypes{};
  shared_ptr<string> quotaIds{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceTypes{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> verboseFields{};
  shared_ptr<string> workspaceId{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productTypes) {
      res["ProductTypes"] = boost::any(*productTypes);
    }
    if (quotaIds) {
      res["QuotaIds"] = boost::any(*quotaIds);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (verboseFields) {
      res["VerboseFields"] = boost::any(*verboseFields);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductTypes") != m.end() && !m["ProductTypes"].empty()) {
      productTypes = make_shared<string>(boost::any_cast<string>(m["ProductTypes"]));
    }
    if (m.find("QuotaIds") != m.end() && !m["QuotaIds"].empty()) {
      quotaIds = make_shared<string>(boost::any_cast<string>(m["QuotaIds"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      resourceTypes = make_shared<string>(boost::any_cast<string>(m["ResourceTypes"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("VerboseFields") != m.end() && !m["VerboseFields"].empty()) {
      verboseFields = make_shared<string>(boost::any_cast<string>(m["VerboseFields"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyResourcesEncryption : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> key{};

  ListResourcesResponseBodyResourcesEncryption() {}

  explicit ListResourcesResponseBodyResourcesEncryption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesEncryption() = default;
};
class ListResourcesResponseBodyResourcesExecutor : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};

  ListResourcesResponseBodyResourcesExecutor() {}

  explicit ListResourcesResponseBodyResourcesExecutor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesExecutor() = default;
};
class ListResourcesResponseBodyResourcesLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListResourcesResponseBodyResourcesLabels() {}

  explicit ListResourcesResponseBodyResourcesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesLabels() = default;
};
class ListResourcesResponseBodyResourcesQuotasSpecs : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListResourcesResponseBodyResourcesQuotasSpecs() {}

  explicit ListResourcesResponseBodyResourcesQuotasSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesQuotasSpecs() = default;
};
class ListResourcesResponseBodyResourcesQuotas : public Darabonba::Model {
public:
  shared_ptr<string> cardType{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaType{};
  shared_ptr<vector<ListResourcesResponseBodyResourcesQuotasSpecs>> specs{};

  ListResourcesResponseBodyResourcesQuotas() {}

  explicit ListResourcesResponseBodyResourcesQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardType) {
      res["CardType"] = boost::any(*cardType);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (specs) {
      vector<boost::any> temp1;
      for(auto item1:*specs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Specs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardType") != m.end() && !m["CardType"].empty()) {
      cardType = make_shared<string>(boost::any_cast<string>(m["CardType"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("Specs") != m.end() && !m["Specs"].empty()) {
      if (typeid(vector<boost::any>) == m["Specs"].type()) {
        vector<ListResourcesResponseBodyResourcesQuotasSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Specs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesQuotasSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specs = make_shared<vector<ListResourcesResponseBodyResourcesQuotasSpecs>>(expect1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyResourcesQuotas() = default;
};
class ListResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<ListResourcesResponseBodyResourcesEncryption> encryption{};
  shared_ptr<string> envType{};
  shared_ptr<ListResourcesResponseBodyResourcesExecutor> executor{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> groupName{};
  shared_ptr<string> id{};
  shared_ptr<bool> isDefault{};
  shared_ptr<vector<ListResourcesResponseBodyResourcesLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> productType{};
  shared_ptr<vector<ListResourcesResponseBodyResourcesQuotas>> quotas{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> spec{};
  shared_ptr<string> workspaceId{};

  ListResourcesResponseBodyResources() {}

  explicit ListResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryption) {
      res["Encryption"] = encryption ? boost::any(encryption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (executor) {
      res["Executor"] = executor ? boost::any(executor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Encryption") != m.end() && !m["Encryption"].empty()) {
      if (typeid(map<string, boost::any>) == m["Encryption"].type()) {
        ListResourcesResponseBodyResourcesEncryption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Encryption"]));
        encryption = make_shared<ListResourcesResponseBodyResourcesEncryption>(model1);
      }
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      if (typeid(map<string, boost::any>) == m["Executor"].type()) {
        ListResourcesResponseBodyResourcesExecutor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Executor"]));
        executor = make_shared<ListResourcesResponseBodyResourcesExecutor>(model1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListResourcesResponseBodyResourcesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListResourcesResponseBodyResourcesLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<ListResourcesResponseBodyResourcesQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<ListResourcesResponseBodyResourcesQuotas>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Spec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListResourcesResponseBodyResources() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourcesResponseBodyResources>> resources{};
  shared_ptr<long> totalCount{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListResourcesResponseBodyResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListRunMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> pageToken{};

  ListRunMetricsRequest() {}

  explicit ListRunMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<long>(boost::any_cast<long>(m["PageToken"]));
    }
  }


  virtual ~ListRunMetricsRequest() = default;
};
class ListRunMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<RunMetric>> metrics{};
  shared_ptr<long> nextPageToken{};
  shared_ptr<string> requestId{};

  ListRunMetricsResponseBody() {}

  explicit ListRunMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<RunMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<RunMetric>>(expect1);
      }
    }
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<long>(boost::any_cast<long>(m["NextPageToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListRunMetricsResponseBody() = default;
};
class ListRunMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRunMetricsResponseBody> body{};

  ListRunMetricsResponse() {}

  explicit ListRunMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRunMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRunMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRunMetricsResponse() = default;
};
class ListRunsRequest : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> labels{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageToken{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListRunsRequest() {}

  explicit ListRunsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<long>(boost::any_cast<long>(m["PageToken"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListRunsRequest() = default;
};
class ListRunsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> nextPageToken{};
  shared_ptr<vector<Run>> runs{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};

  ListRunsResponseBody() {}

  explicit ListRunsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    if (runs) {
      vector<boost::any> temp1;
      for(auto item1:*runs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Runs"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<long>(boost::any_cast<long>(m["NextPageToken"]));
    }
    if (m.find("Runs") != m.end() && !m["Runs"].empty()) {
      if (typeid(vector<boost::any>) == m["Runs"].type()) {
        vector<Run> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Runs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Run model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runs = make_shared<vector<Run>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListRunsResponseBody() = default;
};
class ListRunsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRunsResponseBody> body{};

  ListRunsResponse() {}

  explicit ListRunsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRunsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRunsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRunsResponse() = default;
};
class ListWorkspaceUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  ListWorkspaceUsersRequest() {}

  explicit ListWorkspaceUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListWorkspaceUsersRequest() = default;
};
class ListWorkspaceUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListWorkspaceUsersResponseBodyUsers() {}

  explicit ListWorkspaceUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListWorkspaceUsersResponseBodyUsers() = default;
};
class ListWorkspaceUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkspaceUsersResponseBodyUsers>> users{};

  ListWorkspaceUsersResponseBody() {}

  explicit ListWorkspaceUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<ListWorkspaceUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspaceUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListWorkspaceUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListWorkspaceUsersResponseBody() = default;
};
class ListWorkspaceUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspaceUsersResponseBody> body{};

  ListWorkspaceUsersResponse() {}

  explicit ListWorkspaceUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkspaceUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspaceUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspaceUsersResponse() = default;
};
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fields{};
  shared_ptr<string> moduleList{};
  shared_ptr<string> option{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceIds{};
  shared_ptr<string> workspaceName{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (moduleList) {
      res["ModuleList"] = boost::any(*moduleList);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceIds) {
      res["WorkspaceIds"] = boost::any(*workspaceIds);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fields = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      moduleList = make_shared<string>(boost::any_cast<string>(m["ModuleList"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceIds") != m.end() && !m["WorkspaceIds"].empty()) {
      workspaceIds = make_shared<string>(boost::any_cast<string>(m["WorkspaceIds"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListWorkspacesRequest() = default;
};
class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
public:
  shared_ptr<vector<string>> adminNames{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> envTypes{};
  shared_ptr<map<string, boost::any>> extraInfos{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  ListWorkspacesResponseBodyWorkspaces() {}

  explicit ListWorkspacesResponseBodyWorkspaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminNames) {
      res["AdminNames"] = boost::any(*adminNames);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (envTypes) {
      res["EnvTypes"] = boost::any(*envTypes);
    }
    if (extraInfos) {
      res["ExtraInfos"] = boost::any(*extraInfos);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminNames") != m.end() && !m["AdminNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdminNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdminNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adminNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnvTypes") != m.end() && !m["EnvTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EnvTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EnvTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      envTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExtraInfos") != m.end() && !m["ExtraInfos"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfos"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfos = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspaces() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> resourceLimits{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces{};

  ListWorkspacesResponseBody() {}

  explicit ListWorkspacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceLimits) {
      res["ResourceLimits"] = boost::any(*resourceLimits);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceLimits") != m.end() && !m["ResourceLimits"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceLimits"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceLimits = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Workspaces") != m.end() && !m["Workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Workspaces"].type()) {
        vector<ListWorkspacesResponseBodyWorkspaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspacesResponseBodyWorkspaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<ListWorkspacesResponseBodyWorkspaces>>(expect1);
      }
    }
  }


  virtual ~ListWorkspacesResponseBody() = default;
};
class ListWorkspacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspacesResponseBody> body{};

  ListWorkspacesResponse() {}

  explicit ListWorkspacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkspacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspacesResponse() = default;
};
class LogRunMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RunMetric>> metrics{};

  LogRunMetricsRequest() {}

  explicit LogRunMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<RunMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<RunMetric>>(expect1);
      }
    }
  }


  virtual ~LogRunMetricsRequest() = default;
};
class LogRunMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LogRunMetricsResponseBody() {}

  explicit LogRunMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~LogRunMetricsResponseBody() = default;
};
class LogRunMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogRunMetricsResponseBody> body{};

  LogRunMetricsResponse() {}

  explicit LogRunMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LogRunMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogRunMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~LogRunMetricsResponse() = default;
};
class PublishCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> requestId{};

  PublishCodeSourceResponseBody() {}

  explicit PublishCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PublishCodeSourceResponseBody() = default;
};
class PublishCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishCodeSourceResponseBody> body{};

  PublishCodeSourceResponse() {}

  explicit PublishCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~PublishCodeSourceResponse() = default;
};
class PublishDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PublishDatasetResponseBody() {}

  explicit PublishDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PublishDatasetResponseBody() = default;
};
class PublishDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishDatasetResponseBody> body{};

  PublishDatasetResponse() {}

  explicit PublishDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~PublishDatasetResponse() = default;
};
class PublishImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  PublishImageResponseBody() {}

  explicit PublishImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PublishImageResponseBody() = default;
};
class PublishImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishImageResponseBody> body{};

  PublishImageResponse() {}

  explicit PublishImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishImageResponseBody>(model1);
      }
    }
  }


  virtual ~PublishImageResponse() = default;
};
class RemoveImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveImageResponseBody() {}

  explicit RemoveImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveImageResponseBody() = default;
};
class RemoveImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveImageResponseBody> body{};

  RemoveImageResponse() {}

  explicit RemoveImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveImageResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveImageResponse() = default;
};
class RemoveImageLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveImageLabelsResponseBody() {}

  explicit RemoveImageLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveImageLabelsResponseBody() = default;
};
class RemoveImageLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveImageLabelsResponseBody> body{};

  RemoveImageLabelsResponse() {}

  explicit RemoveImageLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveImageLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveImageLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveImageLabelsResponse() = default;
};
class RemoveMemberRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveMemberRoleResponseBody() {}

  explicit RemoveMemberRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveMemberRoleResponseBody() = default;
};
class RemoveMemberRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveMemberRoleResponseBody> body{};

  RemoveMemberRoleResponse() {}

  explicit RemoveMemberRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveMemberRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveMemberRoleResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveMemberRoleResponse() = default;
};
class SetExperimentLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<LabelInfo>> labels{};

  SetExperimentLabelsRequest() {}

  explicit SetExperimentLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<LabelInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LabelInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<LabelInfo>>(expect1);
      }
    }
  }


  virtual ~SetExperimentLabelsRequest() = default;
};
class SetExperimentLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetExperimentLabelsResponseBody() {}

  explicit SetExperimentLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetExperimentLabelsResponseBody() = default;
};
class SetExperimentLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetExperimentLabelsResponseBody> body{};

  SetExperimentLabelsResponse() {}

  explicit SetExperimentLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetExperimentLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetExperimentLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~SetExperimentLabelsResponse() = default;
};
class UpdateCodeSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeCommit{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> mountPath{};

  UpdateCodeSourceRequest() {}

  explicit UpdateCodeSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    if (codeCommit) {
      res["CodeCommit"] = boost::any(*codeCommit);
    }
    if (codeRepo) {
      res["CodeRepo"] = boost::any(*codeRepo);
    }
    if (codeRepoAccessToken) {
      res["CodeRepoAccessToken"] = boost::any(*codeRepoAccessToken);
    }
    if (codeRepoUserName) {
      res["CodeRepoUserName"] = boost::any(*codeRepoUserName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
    if (m.find("CodeCommit") != m.end() && !m["CodeCommit"].empty()) {
      codeCommit = make_shared<string>(boost::any_cast<string>(m["CodeCommit"]));
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      codeRepo = make_shared<string>(boost::any_cast<string>(m["CodeRepo"]));
    }
    if (m.find("CodeRepoAccessToken") != m.end() && !m["CodeRepoAccessToken"].empty()) {
      codeRepoAccessToken = make_shared<string>(boost::any_cast<string>(m["CodeRepoAccessToken"]));
    }
    if (m.find("CodeRepoUserName") != m.end() && !m["CodeRepoUserName"].empty()) {
      codeRepoUserName = make_shared<string>(boost::any_cast<string>(m["CodeRepoUserName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~UpdateCodeSourceRequest() = default;
};
class UpdateCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> requestId{};

  UpdateCodeSourceResponseBody() {}

  explicit UpdateCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateCodeSourceResponseBody() = default;
};
class UpdateCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCodeSourceResponseBody> body{};

  UpdateCodeSourceResponse() {}

  explicit UpdateCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCodeSourceResponse() = default;
};
class UpdateDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> options{};

  UpdateDatasetRequest() {}

  explicit UpdateDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
  }


  virtual ~UpdateDatasetRequest() = default;
};
class UpdateDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDatasetResponseBody() {}

  explicit UpdateDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDatasetResponseBody() = default;
};
class UpdateDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasetResponseBody> body{};

  UpdateDatasetResponse() {}

  explicit UpdateDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasetResponse() = default;
};
class UpdateDatasetVersionRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> description{};
  shared_ptr<string> options{};

  UpdateDatasetVersionRequest() {}

  explicit UpdateDatasetVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
  }


  virtual ~UpdateDatasetVersionRequest() = default;
};
class UpdateDatasetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDatasetVersionResponseBody() {}

  explicit UpdateDatasetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDatasetVersionResponseBody() = default;
};
class UpdateDatasetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasetVersionResponseBody> body{};

  UpdateDatasetVersionResponse() {}

  explicit UpdateDatasetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDatasetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasetVersionResponse() = default;
};
class UpdateDefaultWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  UpdateDefaultWorkspaceRequest() {}

  explicit UpdateDefaultWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateDefaultWorkspaceRequest() = default;
};
class UpdateDefaultWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDefaultWorkspaceResponseBody() {}

  explicit UpdateDefaultWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDefaultWorkspaceResponseBody() = default;
};
class UpdateDefaultWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDefaultWorkspaceResponseBody> body{};

  UpdateDefaultWorkspaceResponse() {}

  explicit UpdateDefaultWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDefaultWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDefaultWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDefaultWorkspaceResponse() = default;
};
class UpdateExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> name{};

  UpdateExperimentRequest() {}

  explicit UpdateExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateExperimentRequest() = default;
};
class UpdateExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateExperimentResponseBody() {}

  explicit UpdateExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateExperimentResponseBody() = default;
};
class UpdateExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentResponseBody> body{};

  UpdateExperimentResponse() {}

  explicit UpdateExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentResponse() = default;
};
class UpdateModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> modelDescription{};
  shared_ptr<string> modelDoc{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<long> orderNumber{};
  shared_ptr<string> origin{};
  shared_ptr<string> task{};

  UpdateModelRequest() {}

  explicit UpdateModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (modelDescription) {
      res["ModelDescription"] = boost::any(*modelDescription);
    }
    if (modelDoc) {
      res["ModelDoc"] = boost::any(*modelDoc);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (orderNumber) {
      res["OrderNumber"] = boost::any(*orderNumber);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ModelDescription") != m.end() && !m["ModelDescription"].empty()) {
      modelDescription = make_shared<string>(boost::any_cast<string>(m["ModelDescription"]));
    }
    if (m.find("ModelDoc") != m.end() && !m["ModelDoc"].empty()) {
      modelDoc = make_shared<string>(boost::any_cast<string>(m["ModelDoc"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("OrderNumber") != m.end() && !m["OrderNumber"].empty()) {
      orderNumber = make_shared<long>(boost::any_cast<long>(m["OrderNumber"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
  }


  virtual ~UpdateModelRequest() = default;
};
class UpdateModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateModelResponseBody() {}

  explicit UpdateModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateModelResponseBody() = default;
};
class UpdateModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModelResponseBody> body{};

  UpdateModelResponse() {}

  explicit UpdateModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModelResponse() = default;
};
class UpdateModelVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<map<string, boost::any>> compressionSpec{};
  shared_ptr<map<string, boost::any>> evaluationSpec{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<map<string, boost::any>> inferenceSpec{};
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<string> options{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<map<string, boost::any>> trainingSpec{};
  shared_ptr<string> versionDescription{};

  UpdateModelVersionRequest() {}

  explicit UpdateModelVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (compressionSpec) {
      res["CompressionSpec"] = boost::any(*compressionSpec);
    }
    if (evaluationSpec) {
      res["EvaluationSpec"] = boost::any(*evaluationSpec);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (inferenceSpec) {
      res["InferenceSpec"] = boost::any(*inferenceSpec);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trainingSpec) {
      res["TrainingSpec"] = boost::any(*trainingSpec);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("CompressionSpec") != m.end() && !m["CompressionSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompressionSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compressionSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EvaluationSpec") != m.end() && !m["EvaluationSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EvaluationSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      evaluationSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("InferenceSpec") != m.end() && !m["InferenceSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InferenceSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrainingSpec") != m.end() && !m["TrainingSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TrainingSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      trainingSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
  }


  virtual ~UpdateModelVersionRequest() = default;
};
class UpdateModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateModelVersionResponseBody() {}

  explicit UpdateModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateModelVersionResponseBody() = default;
};
class UpdateModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModelVersionResponseBody> body{};

  UpdateModelVersionResponse() {}

  explicit UpdateModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModelVersionResponse() = default;
};
class UpdateRunRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> name{};
  shared_ptr<vector<RunParam>> params{};

  UpdateRunRequest() {}

  explicit UpdateRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<RunParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<RunParam>>(expect1);
      }
    }
  }


  virtual ~UpdateRunRequest() = default;
};
class UpdateRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRunResponseBody() {}

  explicit UpdateRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateRunResponseBody() = default;
};
class UpdateRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRunResponseBody> body{};

  UpdateRunResponse() {}

  explicit UpdateRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRunResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRunResponse() = default;
};
class UpdateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  UpdateWorkspaceRequest() {}

  explicit UpdateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
  }


  virtual ~UpdateWorkspaceRequest() = default;
};
class UpdateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateWorkspaceResponseBody() {}

  explicit UpdateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateWorkspaceResponseBody() = default;
};
class UpdateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceResponseBody> body{};

  UpdateWorkspaceResponse() {}

  explicit UpdateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceResponse() = default;
};
class UpdateWorkspaceResourceRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateWorkspaceResourceRequestLabels() {}

  explicit UpdateWorkspaceResourceRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateWorkspaceResourceRequestLabels() = default;
};
class UpdateWorkspaceResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<bool> isDefault{};
  shared_ptr<vector<UpdateWorkspaceResourceRequestLabels>> labels{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> spec{};

  UpdateWorkspaceResourceRequest() {}

  explicit UpdateWorkspaceResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<UpdateWorkspaceResourceRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateWorkspaceResourceRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<UpdateWorkspaceResourceRequestLabels>>(expect1);
      }
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Spec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spec = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpdateWorkspaceResourceRequest() = default;
};
class UpdateWorkspaceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourceIds{};

  UpdateWorkspaceResourceResponseBody() {}

  explicit UpdateWorkspaceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateWorkspaceResourceResponseBody() = default;
};
class UpdateWorkspaceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceResourceResponseBody> body{};

  UpdateWorkspaceResourceResponse() {}

  explicit UpdateWorkspaceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateWorkspaceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceResourceResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AddImageResponse addImageWithOptions(shared_ptr<AddImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageResponse addImage(shared_ptr<AddImageRequest> request);
  AddImageLabelsResponse addImageLabelsWithOptions(shared_ptr<string> ImageId,
                                                   shared_ptr<AddImageLabelsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageLabelsResponse addImageLabels(shared_ptr<string> ImageId, shared_ptr<AddImageLabelsRequest> request);
  AddMemberRoleResponse addMemberRoleWithOptions(shared_ptr<string> WorkspaceId,
                                                 shared_ptr<string> MemberId,
                                                 shared_ptr<string> RoleName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMemberRoleResponse addMemberRole(shared_ptr<string> WorkspaceId, shared_ptr<string> MemberId, shared_ptr<string> RoleName);
  CreateCodeSourceResponse createCodeSourceWithOptions(shared_ptr<CreateCodeSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCodeSourceResponse createCodeSource(shared_ptr<CreateCodeSourceRequest> request);
  CreateDatasetResponse createDatasetWithOptions(shared_ptr<CreateDatasetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetResponse createDataset(shared_ptr<CreateDatasetRequest> request);
  CreateDatasetLabelsResponse createDatasetLabelsWithOptions(shared_ptr<string> DatasetId,
                                                             shared_ptr<CreateDatasetLabelsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetLabelsResponse createDatasetLabels(shared_ptr<string> DatasetId, shared_ptr<CreateDatasetLabelsRequest> request);
  CreateDatasetVersionResponse createDatasetVersionWithOptions(shared_ptr<string> DatasetId,
                                                               shared_ptr<CreateDatasetVersionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetVersionResponse createDatasetVersion(shared_ptr<string> DatasetId, shared_ptr<CreateDatasetVersionRequest> request);
  CreateDatasetVersionLabelsResponse createDatasetVersionLabelsWithOptions(shared_ptr<string> DatasetId,
                                                                           shared_ptr<string> VersionName,
                                                                           shared_ptr<CreateDatasetVersionLabelsRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetVersionLabelsResponse createDatasetVersionLabels(shared_ptr<string> DatasetId, shared_ptr<string> VersionName, shared_ptr<CreateDatasetVersionLabelsRequest> request);
  CreateExperimentResponse createExperimentWithOptions(shared_ptr<CreateExperimentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExperimentResponse createExperiment(shared_ptr<CreateExperimentRequest> request);
  CreateMemberResponse createMemberWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<CreateMemberRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMemberResponse createMember(shared_ptr<string> WorkspaceId, shared_ptr<CreateMemberRequest> request);
  CreateModelResponse createModelWithOptions(shared_ptr<CreateModelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelResponse createModel(shared_ptr<CreateModelRequest> request);
  CreateModelLabelsResponse createModelLabelsWithOptions(shared_ptr<string> ModelId,
                                                         shared_ptr<CreateModelLabelsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelLabelsResponse createModelLabels(shared_ptr<string> ModelId, shared_ptr<CreateModelLabelsRequest> request);
  CreateModelVersionResponse createModelVersionWithOptions(shared_ptr<string> ModelId,
                                                           shared_ptr<CreateModelVersionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelVersionResponse createModelVersion(shared_ptr<string> ModelId, shared_ptr<CreateModelVersionRequest> request);
  CreateModelVersionLabelsResponse createModelVersionLabelsWithOptions(shared_ptr<string> ModelId,
                                                                       shared_ptr<string> VersionName,
                                                                       shared_ptr<CreateModelVersionLabelsRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelVersionLabelsResponse createModelVersionLabels(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<CreateModelVersionLabelsRequest> request);
  CreateProductOrdersResponse createProductOrdersWithOptions(shared_ptr<CreateProductOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductOrdersResponse createProductOrders(shared_ptr<CreateProductOrdersRequest> request);
  CreateRunResponse createRunWithOptions(shared_ptr<CreateRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRunResponse createRun(shared_ptr<CreateRunRequest> request);
  CreateWorkspaceResponse createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResponse createWorkspace(shared_ptr<CreateWorkspaceRequest> request);
  CreateWorkspaceResourceResponse createWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                     shared_ptr<CreateWorkspaceResourceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResourceResponse createWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<CreateWorkspaceResourceRequest> request);
  DeleteCodeSourceResponse deleteCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCodeSourceResponse deleteCodeSource(shared_ptr<string> CodeSourceId);
  DeleteDatasetResponse deleteDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetResponse deleteDataset(shared_ptr<string> DatasetId);
  DeleteDatasetLabelsResponse deleteDatasetLabelsWithOptions(shared_ptr<string> DatasetId,
                                                             shared_ptr<DeleteDatasetLabelsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetLabelsResponse deleteDatasetLabels(shared_ptr<string> DatasetId, shared_ptr<DeleteDatasetLabelsRequest> request);
  DeleteDatasetVersionResponse deleteDatasetVersionWithOptions(shared_ptr<string> DatasetId,
                                                               shared_ptr<string> VersionName,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetVersionResponse deleteDatasetVersion(shared_ptr<string> DatasetId, shared_ptr<string> VersionName);
  DeleteDatasetVersionLabelsResponse deleteDatasetVersionLabelsWithOptions(shared_ptr<string> DatasetId,
                                                                           shared_ptr<string> VersionName,
                                                                           shared_ptr<DeleteDatasetVersionLabelsRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetVersionLabelsResponse deleteDatasetVersionLabels(shared_ptr<string> DatasetId, shared_ptr<string> VersionName, shared_ptr<DeleteDatasetVersionLabelsRequest> request);
  DeleteExperimentResponse deleteExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentResponse deleteExperiment(shared_ptr<string> ExperimentId);
  DeleteExperimentLabelResponse deleteExperimentLabelWithOptions(shared_ptr<string> ExperimentId,
                                                                 shared_ptr<string> Key,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentLabelResponse deleteExperimentLabel(shared_ptr<string> ExperimentId, shared_ptr<string> Key);
  DeleteMembersResponse deleteMembersWithOptions(shared_ptr<string> WorkspaceId,
                                                 shared_ptr<DeleteMembersRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMembersResponse deleteMembers(shared_ptr<string> WorkspaceId, shared_ptr<DeleteMembersRequest> request);
  DeleteModelResponse deleteModelWithOptions(shared_ptr<string> ModelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelResponse deleteModel(shared_ptr<string> ModelId);
  DeleteModelLabelsResponse deleteModelLabelsWithOptions(shared_ptr<string> ModelId,
                                                         shared_ptr<DeleteModelLabelsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelLabelsResponse deleteModelLabels(shared_ptr<string> ModelId, shared_ptr<DeleteModelLabelsRequest> request);
  DeleteModelVersionResponse deleteModelVersionWithOptions(shared_ptr<string> ModelId,
                                                           shared_ptr<string> VersionName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelVersionResponse deleteModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName);
  DeleteModelVersionLabelsResponse deleteModelVersionLabelsWithOptions(shared_ptr<string> ModelId,
                                                                       shared_ptr<string> VersionName,
                                                                       shared_ptr<DeleteModelVersionLabelsRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelVersionLabelsResponse deleteModelVersionLabels(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<DeleteModelVersionLabelsRequest> request);
  DeleteRunResponse deleteRunWithOptions(shared_ptr<string> RunId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRunResponse deleteRun(shared_ptr<string> RunId);
  DeleteRunLabelResponse deleteRunLabelWithOptions(shared_ptr<string> RunId,
                                                   shared_ptr<string> Key,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRunLabelResponse deleteRunLabel(shared_ptr<string> RunId, shared_ptr<string> Key);
  DeleteWorkspaceResponse deleteWorkspaceWithOptions(shared_ptr<string> WorkspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkspaceResponse deleteWorkspace(shared_ptr<string> WorkspaceId);
  DeleteWorkspaceResourceResponse deleteWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                     shared_ptr<DeleteWorkspaceResourceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkspaceResourceResponse deleteWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<DeleteWorkspaceResourceRequest> request);
  GetCodeSourceResponse getCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCodeSourceResponse getCodeSource(shared_ptr<string> CodeSourceId);
  GetDatasetResponse getDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetResponse getDataset(shared_ptr<string> DatasetId);
  GetDatasetVersionResponse getDatasetVersionWithOptions(shared_ptr<string> DatasetId,
                                                         shared_ptr<string> VersionName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetVersionResponse getDatasetVersion(shared_ptr<string> DatasetId, shared_ptr<string> VersionName);
  GetDefaultWorkspaceResponse getDefaultWorkspaceWithOptions(shared_ptr<GetDefaultWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDefaultWorkspaceResponse getDefaultWorkspace(shared_ptr<GetDefaultWorkspaceRequest> request);
  GetExperimentResponse getExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                 shared_ptr<GetExperimentRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentResponse getExperiment(shared_ptr<string> ExperimentId, shared_ptr<GetExperimentRequest> request);
  GetImageResponse getImageWithOptions(shared_ptr<string> ImageId,
                                       shared_ptr<GetImageRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageResponse getImage(shared_ptr<string> ImageId, shared_ptr<GetImageRequest> request);
  GetMemberResponse getMemberWithOptions(shared_ptr<string> WorkspaceId,
                                         shared_ptr<GetMemberRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMemberResponse getMember(shared_ptr<string> WorkspaceId, shared_ptr<GetMemberRequest> request);
  GetModelResponse getModelWithOptions(shared_ptr<string> ModelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelResponse getModel(shared_ptr<string> ModelId);
  GetModelVersionResponse getModelVersionWithOptions(shared_ptr<string> ModelId,
                                                     shared_ptr<string> VersionName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelVersionResponse getModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName);
  GetPermissionResponse getPermissionWithOptions(shared_ptr<string> WorkspaceId,
                                                 shared_ptr<string> PermissionCode,
                                                 shared_ptr<GetPermissionRequest> tmpReq,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPermissionResponse getPermission(shared_ptr<string> WorkspaceId, shared_ptr<string> PermissionCode, shared_ptr<GetPermissionRequest> request);
  GetRunResponse getRunWithOptions(shared_ptr<string> RunId,
                                   shared_ptr<GetRunRequest> request,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRunResponse getRun(shared_ptr<string> RunId, shared_ptr<GetRunRequest> request);
  GetWorkspaceResponse getWorkspaceWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<GetWorkspaceRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkspaceResponse getWorkspace(shared_ptr<string> WorkspaceId, shared_ptr<GetWorkspaceRequest> request);
  ListCodeSourcesResponse listCodeSourcesWithOptions(shared_ptr<ListCodeSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCodeSourcesResponse listCodeSources(shared_ptr<ListCodeSourcesRequest> request);
  ListDatasetVersionsResponse listDatasetVersionsWithOptions(shared_ptr<string> DatasetId,
                                                             shared_ptr<ListDatasetVersionsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetVersionsResponse listDatasetVersions(shared_ptr<string> DatasetId, shared_ptr<ListDatasetVersionsRequest> request);
  ListDatasetsResponse listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetsResponse listDatasets(shared_ptr<ListDatasetsRequest> request);
  ListExperimentResponse listExperimentWithOptions(shared_ptr<ListExperimentRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentResponse listExperiment(shared_ptr<ListExperimentRequest> request);
  ListImageLabelsResponse listImageLabelsWithOptions(shared_ptr<ListImageLabelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImageLabelsResponse listImageLabels(shared_ptr<ListImageLabelsRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages(shared_ptr<ListImagesRequest> request);
  ListMembersResponse listMembersWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<ListMembersRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMembersResponse listMembers(shared_ptr<string> WorkspaceId, shared_ptr<ListMembersRequest> request);
  ListModelVersionsResponse listModelVersionsWithOptions(shared_ptr<string> ModelId,
                                                         shared_ptr<ListModelVersionsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelVersionsResponse listModelVersions(shared_ptr<string> ModelId, shared_ptr<ListModelVersionsRequest> request);
  ListModelsResponse listModelsWithOptions(shared_ptr<ListModelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelsResponse listModels(shared_ptr<ListModelsRequest> request);
  ListPermissionsResponse listPermissionsWithOptions(shared_ptr<string> WorkspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPermissionsResponse listPermissions(shared_ptr<string> WorkspaceId);
  ListProductsResponse listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductsResponse listProducts(shared_ptr<ListProductsRequest> request);
  ListQuotasResponse listQuotasWithOptions(shared_ptr<ListQuotasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotasResponse listQuotas(shared_ptr<ListQuotasRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListRunMetricsResponse listRunMetricsWithOptions(shared_ptr<string> RunId,
                                                   shared_ptr<ListRunMetricsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRunMetricsResponse listRunMetrics(shared_ptr<string> RunId, shared_ptr<ListRunMetricsRequest> request);
  ListRunsResponse listRunsWithOptions(shared_ptr<ListRunsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRunsResponse listRuns(shared_ptr<ListRunsRequest> request);
  ListWorkspaceUsersResponse listWorkspaceUsersWithOptions(shared_ptr<string> WorkspaceId,
                                                           shared_ptr<ListWorkspaceUsersRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspaceUsersResponse listWorkspaceUsers(shared_ptr<string> WorkspaceId, shared_ptr<ListWorkspaceUsersRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  LogRunMetricsResponse logRunMetricsWithOptions(shared_ptr<string> RunId,
                                                 shared_ptr<LogRunMetricsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LogRunMetricsResponse logRunMetrics(shared_ptr<string> RunId, shared_ptr<LogRunMetricsRequest> request);
  PublishCodeSourceResponse publishCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishCodeSourceResponse publishCodeSource(shared_ptr<string> CodeSourceId);
  PublishDatasetResponse publishDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishDatasetResponse publishDataset(shared_ptr<string> DatasetId);
  PublishImageResponse publishImageWithOptions(shared_ptr<string> ImageId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishImageResponse publishImage(shared_ptr<string> ImageId);
  RemoveImageResponse removeImageWithOptions(shared_ptr<string> ImageId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageResponse removeImage(shared_ptr<string> ImageId);
  RemoveImageLabelsResponse removeImageLabelsWithOptions(shared_ptr<string> ImageId,
                                                         shared_ptr<string> LabelKey,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageLabelsResponse removeImageLabels(shared_ptr<string> ImageId, shared_ptr<string> LabelKey);
  RemoveMemberRoleResponse removeMemberRoleWithOptions(shared_ptr<string> WorkspaceId,
                                                       shared_ptr<string> MemberId,
                                                       shared_ptr<string> RoleName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveMemberRoleResponse removeMemberRole(shared_ptr<string> WorkspaceId, shared_ptr<string> MemberId, shared_ptr<string> RoleName);
  SetExperimentLabelsResponse setExperimentLabelsWithOptions(shared_ptr<string> ExperimentId,
                                                             shared_ptr<SetExperimentLabelsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetExperimentLabelsResponse setExperimentLabels(shared_ptr<string> ExperimentId, shared_ptr<SetExperimentLabelsRequest> request);
  UpdateCodeSourceResponse updateCodeSourceWithOptions(shared_ptr<string> CodeSourceId,
                                                       shared_ptr<UpdateCodeSourceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCodeSourceResponse updateCodeSource(shared_ptr<string> CodeSourceId, shared_ptr<UpdateCodeSourceRequest> request);
  UpdateDatasetResponse updateDatasetWithOptions(shared_ptr<string> DatasetId,
                                                 shared_ptr<UpdateDatasetRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetResponse updateDataset(shared_ptr<string> DatasetId, shared_ptr<UpdateDatasetRequest> request);
  UpdateDatasetVersionResponse updateDatasetVersionWithOptions(shared_ptr<string> DatasetId,
                                                               shared_ptr<string> VersionName,
                                                               shared_ptr<UpdateDatasetVersionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetVersionResponse updateDatasetVersion(shared_ptr<string> DatasetId, shared_ptr<string> VersionName, shared_ptr<UpdateDatasetVersionRequest> request);
  UpdateDefaultWorkspaceResponse updateDefaultWorkspaceWithOptions(shared_ptr<UpdateDefaultWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDefaultWorkspaceResponse updateDefaultWorkspace(shared_ptr<UpdateDefaultWorkspaceRequest> request);
  UpdateExperimentResponse updateExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                       shared_ptr<UpdateExperimentRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentResponse updateExperiment(shared_ptr<string> ExperimentId, shared_ptr<UpdateExperimentRequest> request);
  UpdateModelResponse updateModelWithOptions(shared_ptr<string> ModelId,
                                             shared_ptr<UpdateModelRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModelResponse updateModel(shared_ptr<string> ModelId, shared_ptr<UpdateModelRequest> request);
  UpdateModelVersionResponse updateModelVersionWithOptions(shared_ptr<string> ModelId,
                                                           shared_ptr<string> VersionName,
                                                           shared_ptr<UpdateModelVersionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModelVersionResponse updateModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<UpdateModelVersionRequest> request);
  UpdateRunResponse updateRunWithOptions(shared_ptr<string> RunId,
                                         shared_ptr<UpdateRunRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRunResponse updateRun(shared_ptr<string> RunId, shared_ptr<UpdateRunRequest> request);
  UpdateWorkspaceResponse updateWorkspaceWithOptions(shared_ptr<string> WorkspaceId,
                                                     shared_ptr<UpdateWorkspaceRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceResponse updateWorkspace(shared_ptr<string> WorkspaceId, shared_ptr<UpdateWorkspaceRequest> request);
  UpdateWorkspaceResourceResponse updateWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                     shared_ptr<UpdateWorkspaceResourceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceResourceResponse updateWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<UpdateWorkspaceResourceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AIWorkSpace20210204

#endif
